// 31日目 2.1 フェージング（LED をだんだん明るくする）
// 回路：ピン9（~ のついたピン）→ 220Ω → LED → GND（29日目と同じ）
// 記事のコードをそのまま使った（setup() は空）

int ledPin = 9;   // LED をつないだピン

void setup() {
  // 何も書かない。analogWrite() は、ピンを自動で出力にする
}

void loop() {
  // value を 0 から 255 まで、5 ずつ増やしながらくり返す（52回）
  for (int value = 0; value <= 255; value += 5) {
    analogWrite(ledPin, value);   // 明るさを 0（消灯）〜255（最大）で指定する
    delay(30);                    // 30ミリ秒待つ
  }
  // 255 のあと、for が終わって loop() の先頭にもどる → value が 0 になり、急に暗くなる
}
