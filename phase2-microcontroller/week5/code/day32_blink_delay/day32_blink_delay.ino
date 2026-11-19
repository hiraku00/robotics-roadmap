// 32日目 改造の「比べ用」：delay() で点滅しながら、ボタンも見る
// 29日目の点滅（delay(500) ×2）に、ボタンの確認を足したもの。LED はピン8（32日目の回路）
// 結果：ボタンをすばやく10回押しても、pressed は1回しか出なかった（見のがす）

const int ledPin = 8;
const int buttonPin = 2;
int lastButtonState = LOW;   // 前回のボタンの状態

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(500);                  // ここで0.5秒、何も見ない
  digitalWrite(ledPin, LOW);
  delay(500);                  // ここでも0.5秒、何も見ない

  int buttonState = digitalRead(buttonPin);          // ボタンを見るのは、1周（約1秒）に1回だけ
  if (buttonState == HIGH && lastButtonState == LOW) {   // 押した瞬間だけ
    Serial.println("pressed");
  }
  lastButtonState = buttonState;
}
