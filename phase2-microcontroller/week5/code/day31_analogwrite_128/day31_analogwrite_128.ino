// 31日目 analogWrite の値を 128 に固定して、明るさを見る
// 回路：2.1 と同じ（ピン9 → 220Ω → LED → GND）

int ledPin = 9;

void setup() {
}

void loop() {
  analogWrite(ledPin, 128);   // 255 の約半分。5V の時間が約 50%（平均 約 2.5V）
}
