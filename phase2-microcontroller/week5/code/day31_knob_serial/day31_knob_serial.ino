// 31日目 4.1 ノブを回す（可変抵抗器の値を読む）
// 回路：可変抵抗器の片端 → 5V、もう一方の端 → GND、真ん中 → A0

int analogPin = A0;   // 可変抵抗器の真ん中の足をつないだ、アナログ入力ピン
int val = 0;          // 読んだ値を入れる箱

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin);   // A0 の電圧を 0〜1023 の数字で読む
  Serial.println(val);           // 画面に出す
}
