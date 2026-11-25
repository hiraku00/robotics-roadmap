// 37日目：analogWrite で、モーターを5段階の速さで回す（最初の版）
// 回路：ピン3 → 680Ω → NPN のベース。モーターは電池（3V）の別電源。ダイオードをモーターに並列

int motorPin = 3;                          // ~3 は PWM が使えるピン
int levels[5] = {50, 100, 150, 200, 255};  // 5段階の PWM の値

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    analogWrite(motorPin, levels[i]);      // この値で回す
    Serial.println(levels[i]);             // 今の値をシリアルモニタに出す
    delay(3000);                           // 3秒、そのまま回す
  }
  analogWrite(motorPin, 0);                // 止める
  Serial.println(0);
  delay(3000);
}
