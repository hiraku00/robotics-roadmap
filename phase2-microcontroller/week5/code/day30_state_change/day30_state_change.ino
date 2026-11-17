// 30日目 5.3 ステート変更の検出
// 記事（SunFounder 5.3）はモーターを動かすが、Tinkercad に L9110 と TT モーターがないので、
// モーターの代わりに LED を使う（ピン9 → 220Ω → LED → GND）。
// ボタンは 3.1 と同じ（5V → ボタン → ピン2、ピン2 → 10kΩ → GND）。

const int buttonPin = 2;   // ボタン
const int ledPin = 9;      // モーターの代わりの LED

int detectionState = 0;    // 0 = OFF、1 = ON。押すたびに切り替わる「覚えておく箱」
int buttonState = 0;       // 今回読んだボタンの値
int lastButtonState = 0;   // 前回読んだボタンの値

// 電源を入れたとき（リセットしたとき）に1回だけ動く
void setup() {
  pinMode(buttonPin, INPUT);   // ボタンは「入力」
  pinMode(ledPin, OUTPUT);     // LED は「出力」
  Serial.begin(9600);
}

// setup() のあと、電源を切るまでずっと繰り返す
void loop() {
  buttonState = digitalRead(buttonPin);          // ① 今のボタンを読む

  if (buttonState != lastButtonState) {          // ② 前回と変わったときだけ
    if (buttonState == HIGH) {                   // ③ 「押した瞬間」だけ（離した瞬間は何もしない）
      detectionState = (detectionState + 1) % 2; // ④ 0 → 1 → 0 → 1 …と切り替える
      Serial.print("The detection state is: ");
      Serial.println(detectionState);
    }
    delay(50);                                   // ⑤ ボタンのふるえ（チャタリング）よけ
  }
  lastButtonState = buttonState;                 // ⑥ 今回の値を「前回」として覚える

  if (detectionState == 1) {                     // ⑦ 覚えている状態に合わせて LED を動かす
    digitalWrite(ledPin, HIGH);                  //    記事ではモーターが回る
  } else {
    digitalWrite(ledPin, LOW);                   //    記事ではモーターが止まる
  }
}
