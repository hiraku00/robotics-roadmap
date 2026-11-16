// 29日目 3.0 シリアルモニタ
// 配線なし（Arduino だけ）。数字と文字をシリアルモニタに出す

// 電源を入れたとき（リセットしたとき）に1回だけ動く
void setup()
{
  Serial.begin(9600);             // 通信の速さを 9600 ビット毎秒に決める
}

// setup() のあと、電源を切るまでずっと繰り返す
void loop()
{
  int number = 100;               // number という名前の箱に 100 を入れる
  Serial.println(number);         // 「100」を送って改行する
  Serial.println("Hello world");  // 「Hello world」を送って改行する
  delay(100);                     // 100ミリ秒（0.1秒）待つ
}
