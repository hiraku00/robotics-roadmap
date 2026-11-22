// 34日目 改造②：delay(randomTime) を millis() に置きかえ、待っている間に押したら「フライング」
// 状態：IDLE（待機）→ WAITING（ランダムな時間を待つ。押すと Flying!）→ SHOWING（光った。押すと判定）→ IDLE
// 回路は v1_original と同じ。デバウンス（50ms）も入れてある

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int rstBtn = 9;
const int ledPin1 = 6;     // 緑：ボタン1（ピン2）が正解
const int ledPin2 = 7;     // 赤：ボタン2（ピン3）が正解

const int IDLE = 0;
const int WAITING = 1;
const int SHOWING = 2;

volatile int state = IDLE;             // いまの状態
volatile int target = 0;               // 光らせた LED（0 なら緑、1 なら赤）
volatile unsigned long lightTime = 0;  // 光った時刻
unsigned long waitStart = 0;           // 待ち始めた時刻
unsigned long waitTime = 0;            // 待つ時間（ミリ秒）

volatile unsigned long lastPress[2] = {0, 0};   // 各ボタンを最後に受けた時刻
const unsigned long debounceTime = 50;          // これより短い間隔は、チャタリングとして無視

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(rstBtn, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  Serial.begin(115200);
  randomSeed(analogRead(A0));     // 起動のたびに、ちがう乱数にする（A0 は何もつなげていない）

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);

  attachInterrupt(digitalPinToInterrupt(buttonPin1), pressed1, FALLING);
  attachInterrupt(digitalPinToInterrupt(buttonPin2), pressed2, FALLING);

  Serial.println("GAME START...");
  Serial.println("Click the rst button to play...");
}

void loop() {
  // リセットのボタンで、新しい回を始める
  if (state == IDLE && digitalRead(rstBtn) == LOW) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    Serial.println("Waiting...");
    waitStart = millis();
    waitTime = random(2000, 5000);   // 2〜5秒
    target = random(2);              // 0 か 1
    state = WAITING;
  }

  // 待ち時間がたったら、LED を光らせる（delay を使わず、時刻の差で調べる）
  if (state == WAITING && millis() - waitStart >= waitTime) {
    lightTime = millis();
    state = SHOWING;
    Serial.println("Light!");
    if (target == 0) {
      digitalWrite(ledPin1, HIGH);
    } else {
      digitalWrite(ledPin2, HIGH);
    }
  }
}

void pressed1() {
  press(0);
}

void pressed2() {
  press(1);
}

// ボタンが押されたときの処理（button は 0 か 1）
void press(int button) {
  unsigned long now = millis();
  if (now - lastPress[button] < debounceTime) {   // チャタリング。無視
    return;
  }
  lastPress[button] = now;

  if (state == IDLE) {
    return;                                       // ゲーム中でない
  }
  if (state == WAITING) {
    Serial.println("Flying!");                    // 光る前に押した
    state = IDLE;
    return;
  }
  // state == SHOWING
  if (button == target) {
    Serial.print("Correct! Your reaction time is : ");
    Serial.print(now - lightTime);
    Serial.println(" ms");
  } else {
    Serial.println("Wrong Click!");
  }
  state = IDLE;
}
