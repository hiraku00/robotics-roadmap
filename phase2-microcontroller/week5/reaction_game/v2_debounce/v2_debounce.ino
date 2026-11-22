// 34日目 改造①：割り込みにデバウンスを入れる
// 前回の割り込みを受けた時刻から 50ミリ秒未満なら、チャタリングとして無視する
// あわせて、int を unsigned long に、flag と timer に volatile を付けた
// 回路は v1_original と同じ（配線は変えていない）

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int rstBtn = 9;
const int ledPin1 = 6;
const int ledPin2 = 7;

volatile int flag = -1;                    // ISR と loop() の両方で使う
volatile unsigned long timer = 0;          // 光った時刻
volatile unsigned long lastPress1 = 0;     // ボタン1を最後に受けた時刻
volatile unsigned long lastPress2 = 0;     // ボタン2を最後に受けた時刻
const unsigned long debounceTime = 50;     // これより短い間隔は、チャタリングとして無視（ミリ秒）

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(rstBtn, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  Serial.begin(115200);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);

  attachInterrupt(digitalPinToInterrupt(buttonPin1), pressed1, FALLING);
  attachInterrupt(digitalPinToInterrupt(buttonPin2), pressed2, FALLING);

  Serial.println("GAME START...");
  Serial.println("Click the rst button to play...");
}

void loop() {
  if (flag == -1 && digitalRead(rstBtn) == LOW) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    Serial.println("Waiting...");
    int randomTime = random(2000, 5000);
    delay(randomTime);

    timer = millis();
    flag = randomTime % 2;
    Serial.println("Light!");

    if (flag == 0) {
      digitalWrite(ledPin1, HIGH);
    } else if (flag == 1) {
      digitalWrite(ledPin2, HIGH);
    }
  }
  delay(200);
}

void pressed1() {
  unsigned long now = millis();
  if (now - lastPress1 < debounceTime) {   // 前回から 50ms 未満 → チャタリング。無視
    return;
  }
  lastPress1 = now;

  if (flag == -1) {
    return;
  }
  if (flag == 0) {
    Serial.print("Correct! Your reaction time is : ");
    Serial.print(now - timer);
    Serial.println(" ms");
  } else if (flag == 1) {
    Serial.println("Wrong Click!");
  }
  flag = -1;
}

void pressed2() {
  unsigned long now = millis();
  if (now - lastPress2 < debounceTime) {
    return;
  }
  lastPress2 = now;

  if (flag == -1) {
    return;
  }
  if (flag == 1) {
    Serial.print("Correct! Your reaction time is : ");
    Serial.print(now - timer);
    Serial.println(" ms");
  } else if (flag == 0) {
    Serial.println("Wrong Click!");
  }
  flag = -1;
}
