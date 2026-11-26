// 38日目：L293D で、モーターを正転 → 逆転 → 停止（記事 4.1 の最初のコードを UNO 用に直したもの）
// 回路：~11 → 1A（2番ピン）、~10 → 2A（7番ピン）、1,2EN・VCC1・VCC2 は 5V、GND は Arduino の GND
// 1Y（3番）と 2Y（6番）の間に、モーターをつなぐ

#define motor1A 11
#define motor2A 10

void setup() {
  pinMode(motor1A, OUTPUT);
  pinMode(motor2A, OUTPUT);
}

void loop() {
  // 回る（1A=HIGH、2A=LOW）。Tinkercad では 9393 rpm
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor2A, LOW);
  delay(2000);

  // 逆向きに回る（1A=LOW、2A=HIGH）。Tinkercad では -9393 rpm
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2A, HIGH);
  delay(2000);

  // 止まる（両方 LOW）。Tinkercad では 0 rpm
  digitalWrite(motor1A, LOW);
  digitalWrite(motor2A, LOW);
  delay(3000);
}
