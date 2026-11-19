// 32日目 5.4 インターバル（メロディを鳴らしながら、ボタンで LED を点ける）
// 回路：ブザー（+ → ピン9、- → GND）、LED（ピン8 → 220Ω → LED → GND）、
//       ボタン（5V → ボタン → ピン2、ピン2 → 10kΩ → GND）
// 記事のコードを、Tinkercad で動くように直したもの

// 音の高さ（周波数、Hz）。Tinkercad では別のファイルを足せないので、使う音だけ自分で決める
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262

// メロディ（0 は休符）。全部で9個
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4, 0
};

// 音の長さ。4 なら 1000÷4＝250ミリ秒。melody と同じ9個にそろえる
// （記事のコードは8個で、9番目を読むと配列の外を読んでしまう。9個目に 4 を足した）
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 2, 4
};

const int buzzerPin = 9;
unsigned long previousMillis = 0;   // 最後に音を出した時刻（ミリ秒）
int thisNote = 0;                   // いま何番目の音か
long interval = 1000;               // 次の音までの待ち時間（ミリ秒）

const int ledPin = 8;
const int buttonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);   // 記事のコードは OUTPUT になっていた（まちがい）。入力にする
  Serial.begin(9600);
}

void loop() {
  // 音楽を鳴らす（delay を使わず、時刻の差で「次の音の時刻か」を調べる）
  unsigned long currentMillis = millis();                    // いまの時刻
  if (currentMillis - previousMillis >= interval) {          // 前回から interval 以上たった？
    previousMillis = currentMillis;                          // 今回の時刻を覚える
    tone(buzzerPin, melody[thisNote], 100);                  // 100ミリ秒だけ、その高さの音を出す
    interval = 1000 / noteDurations[thisNote];               // 次の音までの待ち時間を決める
    thisNote = (thisNote + 1) % (sizeof(melody) / 2);        // 次の音へ。最後まで来たら 0 にもどる
  }

  // ボタンを押している間、LED を点ける（音の待ち時間のあいだも、毎回ここを通る）
  digitalWrite(ledPin, digitalRead(buttonPin));
}
