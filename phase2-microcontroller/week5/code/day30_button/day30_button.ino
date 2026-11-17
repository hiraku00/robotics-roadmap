// 30日目 3.1 ボタンの値を読む
// 回路：5V → ボタン → ピン2、ピン2 → 10kΩ → GND（プルダウン抵抗、18日目）
// 元のコード：Arduino 公式の例題 DigitalReadSerial（パブリックドメイン）

// ボタンをつないだピンの番号に、名前をつける
int pushButton = 2;

// 電源を入れたとき（リセットしたとき）に1回だけ動く
void setup() {
  Serial.begin(9600);          // シリアル通信を 9600 ビット毎秒で始める
  pinMode(pushButton, INPUT);  // ピン2を「入力」にする（電圧を聞く側）
}

// setup() のあと、電源を切るまでずっと繰り返す
void loop() {
  int buttonState = digitalRead(pushButton);  // ピン2が HIGH なら 1、LOW なら 0
  Serial.println(buttonState);                // 読んだ値を画面に出す
  delay(1);                                   // 1ミリ秒待つ（読みの安定のため）
}
