// 34日目 デバウンスの動きを確かめるテスト（配線なし。Arduino だけ）
// Tinkercad のボタンはチャタリングを起こさないので、ソフトで「チャタリングのまね」をする
// 5ミリ秒おきに5回「押した」ことにして、1回だけ受け入れられるかを見る
// 結果：1回のループごとに、accepted は 1、ignored は 4 ずつ増えた

volatile unsigned long lastPress = 0;
const unsigned long debounceTime = 50;
volatile int accepted = 0;   // 受け入れた回数
volatile int ignored = 0;    // 無視した回数

void pressed() {
  unsigned long now = millis();
  if (now - lastPress < debounceTime) {
    ignored++;                 // 前回から 50ms 未満 → チャタリング。無視
    return;
  }
  lastPress = now;
  accepted++;                  // 受け入れた
}

void setup() {
  Serial.begin(115200);
  delay(100);                  // 起動直後の 50ms を、さけるため
}

void loop() {
  for (int i = 0; i < 5; i++) {   // チャタリングのまね：5ミリ秒おきに5回
    pressed();
    delay(5);
  }
  Serial.print("accepted=");
  Serial.print(accepted);
  Serial.print("  ignored=");
  Serial.println(ignored);
  delay(1000);                 // 次の「1回の押下」まで、1秒あける
}
