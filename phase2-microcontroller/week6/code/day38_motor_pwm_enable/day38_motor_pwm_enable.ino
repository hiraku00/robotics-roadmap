// 38日目：イネーブル（1,2EN）に PWM を入れて、速さを決める。向きは 1A・2A の ON/OFF で決める
// シリアルモニタに -255〜255 を打つ。正なら 1A=HIGH・2A=LOW、負なら逆。速さは EN の PWM
// 回路：~11 → 1A、~10 → 2A、~9 → 1,2EN（1番ピン。5V からは外す）

#define motor1A 11
#define motor2A 10
#define enablePin 9

void setup() {
  pinMode(motor1A, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(enablePin, OUTPUT);
  Serial.begin(9600);
  Serial.println("type -255 to 255 and send");
}

void loop() {
  if (Serial.available() > 0) {
    String s = Serial.readStringUntil('\n');
    s.trim();
    if (s.length() == 0) return;
    int v = s.toInt();
    if (v >= -255 && v <= 255) {
      if (v >= 0) {
        digitalWrite(motor1A, HIGH);          // 向き：正
        digitalWrite(motor2A, LOW);
        analogWrite(enablePin, v);            // 速さ：EN の PWM
      } else {
        digitalWrite(motor1A, LOW);           // 向き：逆
        digitalWrite(motor2A, HIGH);
        analogWrite(enablePin, -v);
      }
      Serial.print("value=");
      Serial.println(v);
    } else {
      Serial.println("out of range (-255 to 255)");
    }
  }
}
