// 37日目：シリアルモニタに 0〜255 を打つと、その値のまま回り続ける版
// rpm が一瞬で読めない問題を、「値を止めたまま」にして解く
// 回路は day37_motor_pwm_steps と同じ（ピン3）

int motorPin = 3;
int pwm = 0;                               // 今の値

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("type 0-255 and send");
}

void loop() {
  if (Serial.available() > 0) {
    String s = Serial.readStringUntil('\n');  // 1行読む
    s.trim();                                 // 前後の空白・改行を消す
    if (s.length() == 0) return;              // 空なら何もしない
    int v = s.toInt();                        // 数字に変える
    if (v >= 0 && v <= 255) {
      pwm = v;
      analogWrite(motorPin, pwm);
      Serial.print("pwm=");
      Serial.print(pwm);
      Serial.print(" duty=");
      Serial.print(pwm * 100 / 255);
      Serial.print("% avgV=");
      Serial.print(pwm * 3.0 / 255.0, 2);
      Serial.println("V");
    } else {
      Serial.println("out of range (0-255)");
    }
  }
}
