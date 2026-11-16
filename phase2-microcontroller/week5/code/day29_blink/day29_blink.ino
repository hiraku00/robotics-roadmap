// 29日目 1.1 ハロー、LED！
// ピン9 → 220Ω → LED → GND の回路で、LEDを0.5秒ごとに点滅させる

// LEDをつないだピンの番号。ここを変えれば、下の3か所がまとめて変わる
const int ledPin = 9;

// 電源を入れたとき（リセットしたとき）に1回だけ動く
void setup()
{
  pinMode(ledPin, OUTPUT);     // ピン9を「出力」にする
}

// setup() のあと、電源を切るまでずっと繰り返す
void loop()
{
  digitalWrite(ledPin, HIGH);  // ピン9を5Vにする → 点く
  delay(500);                  // 500ミリ秒（0.5秒）待つ
  digitalWrite(ledPin, LOW);   // ピン9を0Vにする → 消える
  delay(500);                  // 500ミリ秒（0.5秒）待つ
}
