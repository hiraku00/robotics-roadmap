// 33日目 実験：割り込みを使わない「通常の読み取り」版（比べ用）
// 回路は割り込み版と同じ。ボタンを見るのを、loop() の中に移しただけ
// 結果：ボタンを一瞬押しても、ブザーは反応しない。長押しすると、少しおくれて反応する

const byte buzzerPin = 8;
const byte buttonPin = 2;
byte state = LOW;            // ブザーの状態
byte lastButtonState = LOW;  // 前回のボタンの状態
int count = 0;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  digitalWrite(buzzerPin, state);
}

void loop() {
  count++;
  Serial.println(count);

  // ボタンを見るのは、1周（約1秒）に1回だけ
  byte buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {    // 前回と変わった（押した／離した）
    state = !state;
    digitalWrite(buzzerPin, state);
  }
  lastButtonState = buttonState;

  delay(1000);   // 1秒止まる。このあいだ、ボタンは見ていない
}
