// 34日目 6.5 反応時間ゲーム（記事のコード。まちがいを1つ直したもの）
// 回路：ボタン3つ（ピン2、ピン3、リセット＝ピン9。どれも 10kΩ で 5V に引き上げ、押すと GND につなぐ）
//       LED 2つ（緑＝ピン6、赤＝ピン7。それぞれ 220Ω を通して、反対側を GND へ）
// ルール：リセットを押す → 2〜5秒待つ → どちらかの LED が光る → 対応するボタンを押す
//         ボタン1（ピン2）は緑、ボタン2（ピン3）は赤が正解
//
// 直したところ：pressed2() の最後に flag = -1; がなかった（pressed1() にはある）
// 直していないところ（記事のまま。あとの改造で直す）：
//   - millis() を int に入れている（約32秒で、あふれる）
//   - flag と timer に volatile がない
//   - 割り込み関数の中で Serial.print を使っている
//   - 待ち時間に delay(randomTime) を使っている（待っている間、ボタンを見ない）

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int rstBtn = 9;
const int ledPin1 = 6;
const int ledPin2 = 7;

int flag = -1;     // -1：待機中、0：緑が光っている、1：赤が光っている
int timer = 0;     // 光った時刻

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(rstBtn, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  Serial.begin(115200);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);

  // ボタンを押した瞬間（HIGH → LOW）に、割り込みで pressed1() / pressed2() を呼ぶ
  attachInterrupt(digitalPinToInterrupt(buttonPin1), pressed1, FALLING);
  attachInterrupt(digitalPinToInterrupt(buttonPin2), pressed2, FALLING);

  Serial.println("GAME START...");
  Serial.println("Click the rst button to play...");
}

void loop() {
  if (flag == -1 && digitalRead(rstBtn) == LOW) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    Serial.println("Waiting...");
    int randomTime = random(2000, 5000);   // 2〜5秒
    delay(randomTime);                      // 待つ（このあいだ、止まる）

    timer = millis();                       // 光った時刻
    flag = randomTime % 2;                  // 0 か 1。どちらの LED を光らせるか
    Serial.println("Light!");

    if (flag == 0) {
      digitalWrite(ledPin1, HIGH);
    } else if (flag == 1) {
      digitalWrite(ledPin2, HIGH);
    }
  }
  delay(200);
}

void pressed1() {
  if (flag == -1) {
    return;
  }
  if (flag == 0) {
    int currentTime = millis();
    Serial.print("Correct! You reaction time is : ");
    Serial.print(currentTime - timer);
    Serial.println(" ms");
  } else if (flag == 1) {
    Serial.println("Wrong Click!");
  }
  flag = -1;
}

void pressed2() {
  if (flag == -1) {
    return;
  }
  if (flag == 1) {
    int currentTime = millis();
    Serial.print("Correct! You reaction time is : ");
    Serial.print(currentTime - timer);
    Serial.println(" ms");
  } else if (flag == 0) {
    Serial.println("Wrong Click!");
  }
  flag = -1;   // 追加：記事のコードにはなかった（なくても pressed1 にはある）
}
