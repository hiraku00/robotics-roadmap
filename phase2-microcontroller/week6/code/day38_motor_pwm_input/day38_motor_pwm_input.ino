// 38日目：1A・2A の入力ピンに PWM を入れて、速さと向きを決める（1,2EN は 5V のまま）
// シリアルモニタに -255〜255 を打つ。正なら 1A に PWM、負なら 2A に PWM
// 回路：~11 → 1A、~10 → 2A（~11 と ~10 は PWM が使えるピン）

#define motor1A 11
#define motor2A 10

void setup() {
  pinMode(motor1A, OUTPUT);
  pinMode(motor2A, OUTPUT);
  Serial.begin(9600);
  Serial.println("type -255 to 255 and send");
}

void loop() {
  if (Serial.available() > 0) {
    String s = Serial.readStringUntil('\n');  // 1行読む
    s.trim();                                 // 前後の空白・改行を消す
    if (s.length() == 0) return;              // 空なら何もしない
    int v = s.toInt();                        // 数字に変える
    if (v >= -255 && v <= 255) {
      if (v >= 0) {
        analogWrite(motor1A, v);              // 1A に PWM
        analogWrite(motor2A, 0);              // 2A は 0（LOW）
      } else {
        analogWrite(motor1A, 0);
        analogWrite(motor2A, -v);             // 2A に PWM（値は正にする）
      }
      Serial.print("value=");
      Serial.println(v);
    } else {
      Serial.println("out of range (-255 to 255)");
    }
  }
}
