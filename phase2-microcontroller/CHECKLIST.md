# フェーズ2 マイコン・モーター・センサー 日別チェックリスト

第5〜8週（29〜56日目）の日別チェックリストです。終わった項目は `- [ ]` を `- [x]` に変えてコミットしてください。進め方は[トップのREADME](../README.md#進め方)、用語は[用語集](../GLOSSARY.md)、教材の一覧と確認状況は[MATERIALS.md](../MATERIALS.md)にあります。

## 第5週 Arduinoの基本

週のゴールは、`delay()` を使わずに複数の処理を同時に進めるプログラムを書けることです。教材はSunFounder 3in1 Kitの日本語レッスンで、回路はすべてTinkercadのArduino UNOで組み、コードはTinkercadのコード画面を「文字」に切り替えて書きます。

**29日目（月）LEDとシリアルモニタ**

- [ ] 読む・組む：[1.1 ハロー、LED！](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_blinking_led.html)（40分）
- [ ] 読む・組む：[3.0 シリアルモニタ](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_serial_monitor.html)。値を画面に出す方法は、この先ずっとデバッグの主な道具になります（40分）
- [ ] 記録：`setup()` と `loop()` の役割を自分の言葉で2行

**30日目（火）ボタンを読む**

- [ ] 読む：[MONOist 俺流！組み込み用語解説(5) GPIO](https://monoist.itmedia.co.jp/mn/spv/2408/29/news034.html)（20分）
- [ ] 読む・組む：[3.1 ボタンの値を読む](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_button.html)。第3週のプルダウン抵抗がそのまま出てきます（40分）
- [ ] 読む・組む：[5.3 ステート変更の検出](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_state_change.html)。「押している間」ではなく「押した瞬間」を数える（40分）

**31日目（水）PWMとアナログ入力**

- [ ] 読む・組む：[2.1 フェージング](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_fading.html)。PWMでLEDの明るさを変える（30分）
- [ ] 読む・組む：[4.1 ノブを回す](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_turn_the_knob.html)と[5.6 マッピング](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_map.html)。可変抵抗（分圧）の値0〜1023を、PWMの0〜255に変換する（50分）
- [ ] 記録：「可変抵抗は第2週の分圧回路そのもの」であることを回路図で確認

**32日目（木）millis() で待たない処理**

- [ ] 読む・組む：[5.4 インターバル](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_interval.html)（40分）
- [ ] 改造：29日目のLED点滅を `delay()` なしで書き直し、点滅しながらボタンも反応するようにする（50分）
- [ ] 記録：`delay()` を使うとボタンが反応しなくなる理由を1行

**33日目（金）割り込み**

- [ ] 読む・組む：[5.13 割り込み](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_interrupt.html)。UNOで割り込みが使えるのはピン2と3だけ、割り込み関数は短く書く、の2点を押さえる（60分）
- [ ] 実験：ボタンの読み取りを、通常の読み取り（30日目）と割り込みで比べ、`delay(1000)` が入っているときの反応の違いを確かめる（30分）

**34日目（土）反応時間ゲーム（筆者の課題）**

- [ ] 読む・組む：[6.5 反応時間ゲーム](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_reaction_game.html)をTinkercadで再現する。割り込みでボタンを受け、`millis()` の差で反応時間を出す仕組み（60分）
- [ ] 読む：[MONOist 俺流！組み込み用語解説(8) チャタリング対策をソフトウェアだけで行う方法](https://monoist.itmedia.co.jp/mn/articles/2411/13/news015.html)。ボタンを1回押しても接点が細かく跳ねて何回も押したように見える「チャタリング」を、プログラムで無視する方法（デバウンス）。元記事の反応時間ゲームはこれを使う前提です（20分）
- [ ] 改造：割り込みにデバウンスを入れ、1回押しで1回だけ反応するようにする（20分）
- [ ] 改造：見本はランダムな待ち時間に `delay()` を使っています。これを `millis()` に置き換え、待っている間に押したら「フライング」と表示する（60分）
- [ ] `week5/reaction_game/` にコードと動画を置く

**35日目（日）休み**

## 第6週 モーター

週のゴールは、DCモーターの速度と向きをPWMとHブリッジで制御し、エンコーダの数を数えて「ちょうど1回転」で止められることです。日本語の主教材はMONOistの連載「Arduinoで学ぶ基礎からのモーター制御」です。

**36日目（月）トランジスタでモーターを回す**

- [ ] 読む：[MONOist モーター制御(2) マブチモーターをArduinoで制御する](https://monoist.itmedia.co.jp/mn/articles/1601/28/news005.html)（全5ページ、40分）。ピンから直接は回せないこと、ベース電流の決め方、始動時の突入電流で回らない話
- [ ] 組む：TinkercadでArduino → ベース抵抗 → NPNトランジスタ → DCモーター（別電源）の回路を作り、ピンのON/OFFで回す。ベース抵抗は第3週の計算で決める（50分）

**37日目（火）逆起電力とPWMの速度制御**

- [ ] 読む：[MONOist モーター制御(4) 困ったら読みたいTips](https://monoist.itmedia.co.jp/mn/spv/1603/04/news042_2.html)のダイオードによる逆起電力対策（20分）
- [ ] 読む：[MONOist モーター制御(5) PWMでマブチモーターを制御する](https://monoist.itmedia.co.jp/mn/articles/1604/11/news014.html)（全5ページ、40分）
- [ ] 組む：36日目の回路にダイオードを足し、`analogWrite()` で5段階の速度にする。PWMの値と回転の速さの関係を表にする（筆者の課題の前半）（40分）

**38日目（水）Hブリッジで向きを変える**

- [ ] 読む：[SunFounder ESP32「4.1 モーター」](https://docs.sunfounder.com/projects/esp32-starter-kit/ja/latest/arduino/basic_projects/ar_motor.html)。L293Dで正転・逆転・停止、さらにPWMで加減速する流れ（30分）
- [ ] 組む：TinkercadのArduino UNOとL293Dで同じ動きを作る。2本の入力の組み合わせで向きが決まり、イネーブルのPWMで速さが決まる（60分）
- [ ] 注意：筆者はL298NやL293Dのような古いドライバは発熱と電圧ロスが大きく、実機ではTB6612FNGやDRV8833を勧めています。シミュレーションでは仕組みの理解に使います

**39日目（木）サーボモーター**

- [ ] 読む・組む：[SunFounder 3in1「5.5 内蔵ライブラリの使用」](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_use_internal_library.html)。Servoライブラリで0〜180度に動かす（40分）
- [ ] 改造：可変抵抗の値（第5週の `map()`）でサーボの角度を決める（40分）
- [ ] 記録：サーボは内部で角度を自分で合わせる（閉ループ）が、外からは角度が分からない、という違いを1行

**40日目（金）エンコーダで「ちょうど1回転」（筆者の課題の後半）**

- [ ] 準備：Tinkercadの部品検索で「エンコーダ付きDCモーター」を探す。見つからない場合はWokwiの[ロータリーエンコーダ KY-040](https://docs.wokwi.com/parts/wokwi-ky-040)で、回転のパルスを数える部分だけ練習する（英語）
- [ ] 読む：[MONOist 俺流！組み込み用語解説(10) マイコンで機械式ロータリーエンコーダーを扱う](https://monoist.itmedia.co.jp/mn/articles/2501/14/news006.html)（2ページ）。エンコーダ（回転を細かいパルスに変えて数えられるようにする部品）の仕組みと、2本の信号のずれから回転の向きを判定する方法（30分）
- [ ] 組む：エンコーダのA相を割り込みピン（2番）につなぎ、パルス数を数える。1回転分のパルス数で止める関数を書く（60分）
- [ ] 実験：電源電圧（=速度）を変えても同じ位置で止まるかを確かめる。行き過ぎる場合は、止める少し手前で減速する（30分）

**41日目（土）ステッピングモーター**

- [ ] 読む：[MONOist モーター制御(10) A4988を学ぶ](https://monoist.itmedia.co.jp/mn/spv/1609/09/news012.html)（30分）
- [ ] 組む：Wokwiの[A4988の部品説明](https://docs.wokwi.com/parts/wokwi-a4988)にある例題を開き、STEPのパルス数と回転角の関係を確かめる。フルステップで1回転200パルス、ハーフステップで400パルス（英語、表を見るだけで分かります）（40分）
- [ ] `week6/` に、速度の表とエンコーダ制御のコードを置く

**42日目（日）休み**

## 第7週 センサーとフィルタ

週のゴールは、ノイズのある距離センサーと、ドリフトするジャイロから、使える値を取り出せることです。シミュレータのセンサー値はノイズがなくきれいすぎるので、コードやPythonでノイズを足して試します。ros2_wsで作った移動平均とヒステリシスを、ここでマイコンに移します。

**43日目（月）超音波センサーで距離を測る**

- [ ] 読む：[SunFounder ESP32「5.12 距離の測定」](https://docs.sunfounder.com/projects/esp32-starter-kit/ja/latest/arduino/basic_projects/ar_ultrasonic.html)で、超音波が往復する時間から距離を出す仕組み（30分）
- [ ] 読む・組む：[SunFounder 3in1「6.4 駐車補助」](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_reversing_aid.html)をTinkercadの超音波センサーで再現する。LCDは省き、距離をシリアルに出して、近いほどブザーの間隔を短くする（60分）

**44日目（火）ノイズと移動平均**

- [ ] 復習：自分の[ros2_ws「ノイズ・チャタリング・フィルタ」](https://github.com/hiraku00/ros2_ws/blob/main/docs/basics/03-noise-and-filters.md)を読み直す（15分）
- [ ] 組む：43日目の距離に `random()` でノイズを足し、直近5回の移動平均を計算するコードを書く。生の値と平均した値を並べてシリアルに出す（60分）
- [ ] 実験：平均する回数を1、5、20と変え、ノイズの減り方と反応の遅れを記録する（ros2_wsで測った結果と比べる）（30分）

**45日目（水）ヒステリシスで判断する**

- [ ] 組む：ros2_wsの頭脳（FORWARD / SLOW / STOP）と同じ判断を、LED3色で表すコードを書く。境界の「入る線」と「出る線」をずらすヒステリシス付き（60分）
- [ ] 実験：ヒステリシスを0にすると境界付近でLEDがちらつくことを確かめ、ずらす幅を変えて記録（30分）

**46日目（木）IMU（加速度とジャイロ）の基礎**

- [ ] 読む：[SunFounder「加速度センサー & ジャイロスコープモジュール（MPU6050）」](https://docs.sunfounder.com/projects/ultimate-sensor-kit/ja/latest/components_basic/05-component_mpu6050.html)。3軸の向きと、何が測れるか（30分）
- [ ] 読む：[おもろ家「Arduino 入門 番外編 06【I2C通信 とは】」](https://omoroya.com/arduino-extra-edition-06/)。MPU6050がつながる「I2C」（2本の線SDA・SCLで複数の部品と会話する方式）と、部品ごとの番号「I2Cアドレス」の調べ方（30分）
- [ ] 調べる：Wokwiの部品説明から、MPU6050のI2Cアドレス（0x68、AD0ピンをVCCにつなぐと0x69）と、SDA・SCLのピンを自分で見つけてメモする。元記事のマイルストーン「データシートを読んで、チュートリアルなしでI2Cセンサーをつなぐ」の練習です（10分）
- [ ] 組む：Wokwiの[MPU6050の部品説明](https://docs.wokwi.com/parts/wokwi-mpu6050)にある「X/Y/Z acceleration plotter」の例題を開き、シミュレーション中に加速度と回転の値を動かして出力を見る（英語、例題を開くだけ）（40分）
- [ ] 改造：加速度のYとZから、`atan2()` で傾き角（ピッチ）を出してシリアルに表示する（30分）

**47日目（金）相補フィルタをPythonで作る**

- [ ] 読む：[Complementary filter and relative orientation（Hackster）](https://www.hackster.io/hibit/complementary-filter-and-relative-orientation-with-mpu9250-d4f79d)の「Accelerometer angles」から「Complementary filters」まで（英語、20分）。加速度は止まっていると正確だが揺れに弱い、ジャイロは速い動きに強いが積分でずれていく、の2点が要点
- [ ] 作る：手元のMacのPythonで、傾き10度で静止している板のデータを作る。ジャイロには小さな偏り（0.5度/秒など）、加速度には揺れのノイズを足す（40分）
- [ ] 比べる：ジャイロを積分しただけの角度、加速度だけの角度、相補フィルタ `angle = 0.98 × (angle + gyro × dt) + 0.02 × accAngle` の3本をmatplotlibで重ねる。ジャイロだけの線がずれていき、フィルタの線がずれないことを確認（筆者の「最も重要な教訓」）（40分）

**48日目（土）Arduinoに相補フィルタを載せる**

- [ ] 組む：46日目のWokwiのコードに相補フィルタを入れる。`dt` は `millis()` の差から計算する（60分）
- [ ] 実験：コード内でジャイロ値に偏りを足し、フィルタありなしで角度のずれ方を比べる（30分）
- [ ] `week7/` に、Pythonのグラフと比較結果を置く

**49日目（日）休み**

## 第8週 ESP32・PID制御・ros2_wsとの合流

週のゴールは、P制御とPD制御の違いをグラフで示せることと、ros2_wsの頭脳をマイコン上のロボットに移植することです。最後の2日でMonth 2を締めくくります。

**50日目（月）ESP32をWokwiで動かす**

- [ ] 読む：[Wokwi「ESP32 Simulator」](https://docs.wokwi.com/guides/esp32)（英語、15分）
- [ ] 読む・組む：[SunFounder ESP32「2.1 LEDを点灯させよう」](https://docs.sunfounder.com/projects/esp32-starter-kit/ja/latest/arduino/basic_projects/ar_blinking_led.html)と[「2.2 フェーディング」](https://docs.sunfounder.com/projects/esp32-starter-kit/ja/latest/arduino/basic_projects/ar_fading.html)を、WokwiのESP32で再現する（60分）
- [ ] 記録：Arduino UNOとの違い（3.3V動作、PWMの書き方、使えるピン）を3行（15分）

**51日目（火）ESP32のWi-Fi**

- [ ] 読む：[Wokwi「ESP32 WiFi Networking」](https://docs.wokwi.com/guides/esp32-wifi)（英語、20分）。仮想アクセスポイント「Wokwi-GUEST」にパスワードなしで接続できる
- [ ] 組む：同ページの例題「NTP Client」を開き、インターネットから時刻を取ってくることを確認（40分）
- [ ] 注意：筆者の課題「ESP32でWebページを配信してスマホから操作する」は、Wokwiでは有料プランの機能が必要です。今回はインターネットへ取りに行く側だけを練習し、配信側は実機を買ってから行います

**52日目（水）PID制御の考え方**

- [ ] 読む：[東北学院大学「制御の基礎」スライド](https://www.mech.tohoku-gakuin.ac.jp/rde/contents/sendai/mechatro/archive/RMSeminar_No09.pdf)。P制御と、ずれの変化に歯止めをかけるD制御のイメージ（30分）
- [ ] 読む：[MONOist ETロボコンではじめるシステム制御(3) PID制御とは](https://monoist.itmedia.co.jp/mn/spv/1005/21/news095.html)（40分）
- [ ] 記録：P・I・Dがそれぞれ「現在・過去・未来」のずれに対応することを、自分の言葉で3行（20分）

**53日目（木）ライントレースをPythonで比べる（筆者の課題）**

- [ ] 読む：[SunFounder 3in1「3.4 ラインを検出する」](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_detect_the_line.html)と[MONOist ETロボコン(4) 滑らかで安定したライントレース](https://monoist.itmedia.co.jp/mn/articles/1007/26/news083.html)（30分）
- [ ] 作る：Pythonで、線からのずれを入力、左右の旋回量を出力とする簡単なロボットを作る（毎ステップ、旋回量に応じて向きが変わり、向きに応じてずれが変わる）（40分）
- [ ] 比べる：P制御だけ、PD制御の2通りでずれの時間変化をグラフにする。Pだけだと振動し、Dを足すと振動が収まることを確かめる。ゲインを変えた結果も残す（40分）

**54日目（金）ros2_wsの頭脳をArduinoに移植する**

- [ ] 組む：TinkercadでArduino UNO、超音波センサー、L293D、DCモーター、LED3色をつなぐ（40分）
- [ ] 移植：ros2_wsのbrainと同じく、距離を移動平均し、ヒステリシス付きで FORWARD → SLOW → STOP → TURN を切り替える。速度はPWM、向きはHブリッジで表す（50分）
- [ ] 記録：ros2_wsと同じ形式で「予想 → 実測 → 差の理由」を書く。シミュレーション同士の比較になりますが、実機で取り直すときの比較表の土台になります

**55日目（土）Month 2 マイルストーン確認**

- [ ] PWMの値と実際の回転の速さの違いを説明できる
- [ ] エンコーダのパルスを数えて位置で止められる
- [ ] センサーの説明（データシート）を読んで、I2Cの配線と読み取りを自分で書ける
- [ ] 加速度とジャイロを合わせて安定した角度を出せる
- [ ] P・I・Dそれぞれの効き方を、自分のグラフを使って説明できる
- [ ] GitHubに、Month 2の作品（反応時間ゲーム、モーター制御、相補フィルタ、PD比較、移植した頭脳）を、うまくいかなかった点の記録付きで置く

**56日目（日）休み**

