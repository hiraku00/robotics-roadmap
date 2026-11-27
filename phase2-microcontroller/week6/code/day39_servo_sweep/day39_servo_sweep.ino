// 39日目：Servo ライブラリで、サーボを 0 → 180 → 0 度と、往復させる（記事 5.5 のコード）
// 回路：サーボのオレンジ（信号）→ ピン9、赤 → 5V、ブラウン → GND

#include <Servo.h>   // サーボ用の内蔵ライブラリを使えるようにする

Servo myservo;       // サーボ1つぶんの「部品」を作る（名前は myservo）

void setup()
{
  myservo.attach(9);  // ピン9から、サーボ用のパルスを出す設定にする（記事のコメントは「15番」だが、コードは 9）
  myservo.write(0);   // まず 0 度にする
  delay(1000);        // 1秒待つ（0 度になるのを待つ）
}

void loop()
{
  for (int i = 0; i <= 180; i++)   // 0 度から 180 度まで、1 度ずつ増やす
  {
    myservo.write(i);   // i 度にする
    delay(15);          // 15ms 待つ（腕が動くのを待つ）
  }
  for (int i = 180; i >= 0; i--)   // 180 度から 0 度まで、1 度ずつ減らす
  {
    myservo.write(i);
    delay(15);
  }
}
