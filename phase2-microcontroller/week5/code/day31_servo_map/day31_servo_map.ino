// 31日目 5.6 マッピング（サーボ版）
// 回路：4.1 の可変抵抗器 ＋ サーボ（信号 → ピン9、電源 → 5V、GND → GND）
// 記事のコードに、画面に出す3行（Serial）を足した

#include <Servo.h>          // サーボ用のライブラリ（道具）

Servo myservo;              // サーボを1つ用意する

const int servoPin = 9;     // サーボの信号線をつないだピン
const int knob = A0;        // 可変抵抗器をつないだピン

void setup() {
  Serial.begin(9600);                // 追加：画面に出すため
  myservo.attach(servoPin);          // サーボがピン9につながっていると教える
}

void loop() {
  int value = analogRead(knob);                 // 0〜1023
  int angle = map(value, 0, 1023, 0, 180);      // 0〜1023 を 0〜180（度）に変換。小数点以下は切り捨て
  myservo.write(angle);                         // サーボを angle 度にする
  Serial.print(value);                          // 追加：読んだ値
  Serial.print(" -> ");                         // 追加
  Serial.println(angle);                        // 追加：変換後の角度
  delay(15);                                    // サーボが動くのを待つ
}
