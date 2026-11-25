// 37日目：5段階の速さ。ログ（段階・値・デューティー比・平均電圧・時刻）をシリアルモニタに出す版
// 回路は day37_motor_pwm_steps と同じ（ピン3）
// rpm（回転数）は Arduino から読めない。モーターの横の表示を、目で読む

int motorPin = 3;
int levels[5] = {50, 100, 150, 200, 255};
int lap = 0;                               // 何周目か

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("start");
}

void loop() {
  lap++;
  for (int i = 0; i < 6; i++) {            // 0〜4 は5段階、5 は停止
    int v = (i < 5) ? levels[i] : 0;
    analogWrite(motorPin, v);

    Serial.print("lap=");
    Serial.print(lap);
    Serial.print(" step=");
    Serial.print(i + 1);
    Serial.print(" pwm=");
    Serial.print(v);
    Serial.print(" duty=");
    Serial.print(v * 100 / 255);           // 整数。小数は切り捨て
    Serial.print("% avgV=");
    Serial.print(v * 3.0 / 255.0, 2);      // 電池3Vの場合の平均電圧（計算。測っていない）
    Serial.print("V t=");
    Serial.print(millis());
    Serial.println("ms");

    delay(3000);                           // 3秒間そのまま
  }
}
