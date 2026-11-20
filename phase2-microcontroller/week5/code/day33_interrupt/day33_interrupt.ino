// 33日目 5.13 割り込み
// 回路：ボタン（5V → ボタン → ピン2、ピン2 → 10kΩ → GND）、ブザー（+ → ピン8、- → GND）
// loop() は delay(1000) で1秒止まっているのに、ボタンを押すと、すぐブザーが鳴る

const byte buzzerPin = 8;        // ブザーをつないだピン
const byte interruptPin = 2;     // ボタンをつないだピン。UNO で割り込みが使えるのは、ピン2と3だけ
volatile byte state = LOW;       // ブザーの状態。volatile ＝ loop() とは別の関数（割り込み）からも変わる印
int count = 0;                   // 1秒ごとに数える

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(interruptPin, INPUT);   // ボタンのピンは入力
  // 「ピン2の値が変わったら（CHANGE）、noisy という関数を、すぐ呼ぶ」と登録する
  attachInterrupt(digitalPinToInterrupt(interruptPin), noisy, CHANGE);
  Serial.begin(9600);
  digitalWrite(buzzerPin, state);
}

void loop() {
  count++;
  Serial.println(count);   // 1秒ごとに、数を画面に出す
  delay(1000);             // 1秒止まる。止まっているあいだも、割り込みは動く
}

// 割り込み関数（ISR）。ボタンが変わったときだけ呼ばれる。短く書く
void noisy() {
  state = !state;                  // 0 なら 1、1 なら 0 にする
  digitalWrite(buzzerPin, state);  // ブザーに出す
}
