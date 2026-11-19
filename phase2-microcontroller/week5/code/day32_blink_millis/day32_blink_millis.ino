// 32日目 改造：delay() を使わず、millis() で点滅しながら、ボタンも見る
// 結果：ボタンをすばやく10回押すと、pressed が10回出た（見のがさない）

const int ledPin = 8;
const int buttonPin = 2;

int ledState = LOW;                  // LED の今の状態
unsigned long previousMillis = 0;    // 最後に LED を切りかえた時刻
const long interval = 500;           // 切りかえる間隔（ミリ秒）
int lastButtonState = LOW;           // 前回のボタンの状態

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // LED：0.5秒たったら、点く・消えるを入れかえる（待たずに、時刻の差だけ調べる）
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }

  // ボタン：loop() が回るたび（止まらないので、とても多く）見る
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH && lastButtonState == LOW) {   // 押した瞬間だけ
    Serial.println("pressed");
  }
  lastButtonState = buttonState;
}
