// 39日目：可変抵抗の値（0〜1023）を map() で角度（0〜180）に変えて、サーボを動かす
// 回路：可変抵抗器の真ん中の足 → A0（左の足 → 5V、右の足 → GND）、サーボは day39_servo_sweep と同じ（ピン9）
// 31日目の day31_servo_map と、ほぼ同じコード

#include <Servo.h>

Servo myservo;
int potPin = A0;                              // 可変抵抗器の真ん中の足をつないだピン

void setup() {
  myservo.attach(9);                          // ピン9にサーボ
  Serial.begin(9600);                         // 画面に出すため
}

void loop() {
  int val = analogRead(potPin);               // 0〜1023
  int angle = map(val, 0, 1023, 0, 180);      // 0〜1023 を 0〜180 に変換（小数は切り捨て）
  myservo.write(angle);                       // サーボを angle 度にする
  Serial.print(val);
  Serial.print(" -> ");
  Serial.println(angle);
  delay(15);                                  // 腕が動くのを待つ
}
