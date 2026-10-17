# Month 1–2 実機なし 日別チェックリスト

@DeRonin_ のロードマップのMonth 1〜2を、実機なしで8週間（56日）で進めるためのチェックリストです。載せたURLは2026年10月17日に実在を確認しました（確認の深さは末尾の「確認できなかったこと・注意点」を参照）。

終わった項目は `- [ ]` を `- [x]` に変えてコミットしてください。コミット履歴がそのまま学習記録になります。

## 使い方と前提

- 1日の目安は約2時間です。日曜は休みにしています。時間は教材の分量から見積もった目安で、実測ではありません。
- 1日の流れは「読む（20〜30分）→ シミュレータで手を動かす（60〜80分）→ 予想・結果・差の理由を3行で記録（10〜15分）」です。
- 英語の教材は、ブラウザのページ翻訳で読む前提です。回路図・コード・数式は翻訳の影響を受けません。
- 実機でしかできないこと（はんだ付けの実技、本物のテスターでの測定）は、第4週に座学だけ入れ、実機を買えた時点で取り戻します。
- 記録は各週のフォルダ（`week1/` 〜 `week8/`）の `README.md` に残します。

**言語の方針**：日本語の教材を優先しています。英語が残っているのは、日本語で同等のものが見つからなかった3つだけです（Wokwiの公式ドキュメント、Falstadの例題ページ、相補フィルタの解説）。Falstadは図と動きを見る教材なので、英語はほぼ読まなくて済みます。

**詰まったら**、次の日に進まずその日をやり直してください。各週の土曜日は、遅れを取り戻すための日でもあります。

## 教材一覧

主教材は日本語の4つです。中学理科の計算ドリル、SunFounderの日本語レッスン（回路の基礎とArduino）、DigiKeyの日本語解説、MONOistの連載を軸にし、手を動かす場所はTinkercadとWokwiです。SunFounderのレッスンは実物のキットが前提ですが、同じ部品はTinkercadにあるので、画面上で組んで進めます。

| 教材 | 言語 | 確認した中身 | 使う週 |
| --- | --- | --- | --- |
| [無料で使える中学学習プリント：電流・電圧と回路](https://chugaku.manabihiroba.net/rikaindex/1bunyarika) | 日本語 | 回路と電気記号、オームの法則、直列・並列、回路全体の抵抗、電力と電力量。各単元に解説とPDF問題、PDFの2ページ目に解答 | 1〜3、以降も週3回 |
| [SunFounder Inventor Lab Kit ハンズオンレッスン](https://docs.sunfounder.com/projects/inventor-lab-kit/ja/latest/lessons/lessons.html) | 日本語 | 初めての回路、マルチメーターの使い方、オームの法則の実験、直列と並列の測定。測定の手順と記録表つき | 1 |
| [SunFounder 3in1 Kit 基本的なプロジェクト](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/basic_project.html) | 日本語 | Arduinoのデジタル出力・PWM・ボタン・アナログ入力、millisのインターバル、割り込み、サーボ、超音波、反応時間ゲーム。回路図とコードの説明つき | 4〜6 |
| [SunFounder ESP32 Starter Kit（Arduino編）](https://docs.sunfounder.com/projects/esp32-starter-kit/ja/latest/arduino/for_arduino_user.html) | 日本語 | ESP32の準備、L293Dでのモーター駆動とPWM速度制御、サーボ、超音波での距離測定など | 6、8 |
| [MONOist Arduinoで学ぶ基礎からのモーター制御](https://monoist.itmedia.co.jp/mn/series/2914/) | 日本語 | トランジスタでのモーター駆動、突入電流、ノイズ対策、PWM、サーボ、ステッピングモーター、A4988 | 6 |
| [DigiKey 日本語フォーラム「分圧器の基礎」](https://forum.digikey.com/t/topic/44004) | 日本語 | 分圧の式の導き方、負荷で電圧が下がる落とし穴、記事末に練習問題 | 2 |
| [MONOist 電子工作“超”入門](https://monoist.itmedia.co.jp/mn/series/1799/)と[今岡通博の俺流！組み込み用語解説](https://monoist.itmedia.co.jp/mn/series/39023/) | 日本語 | 抵抗、コンデンサ、キルヒホッフの法則、トランジスタ、プルアップ抵抗、GPIO | 1〜3、5 |
| [MONOist ETロボコンではじめるシステム制御(3)](https://monoist.itmedia.co.jp/mn/spv/1005/21/news095.html)と[(4)](https://monoist.itmedia.co.jp/mn/articles/1007/26/news083.html) | 日本語 | ライントレースを題材に、P・I・Dの役割と、D制御が強すぎると振動する例 | 8 |
| [Tinkercad Circuits](https://www.tinkercad.com/circuits) | 日本語UI | 仮想ブレッドボード、Arduino UNO、マルチメーター、モーター、サーボ、超音波センサー | 全週 |
| [Wokwi Docs](https://docs.wokwi.com/) | 英語のみ | ESP32、MPU6050、A4988とステッピングモーター、HC-SR04の部品説明と例題。日本語の解説は見つからず | 6〜8 |
| [Falstad 回路シミュレータ 例題一覧](https://www.falstad.com/circuit/e-index.html) | 英語のみ | 電流の動きをアニメーションで見る例題。説明文は短く、見るのが中心 | 1〜3 |

## 第1週 オームの法則・直列並列・電力

週のゴールは、抵抗が2〜3本の回路の電流・電圧・電力を手で計算し、Tinkercadの仮想テスターで答え合わせできることです。

**1日目（月）回路と記号**

- [ ] 読む：[回路と電気記号](https://chugaku.manabihiroba.net/rika/kairo.html)と[回路を流れる電流と電圧の性質](https://chugaku.manabihiroba.net/rika/denryudenatus.html)（30分）
- [ ] Tinkercadにアカウントを作る：[Tinkercad Circuits](https://www.tinkercad.com/circuits)
- [ ] 演習：[SunFounder「2. 初めての回路」](https://docs.sunfounder.com/projects/inventor-lab-kit/ja/latest/lessons/2_first_circuit.html)を読み、同じ回路（Arduinoの5V → 220Ω → LED → GND）をTinkercadのブレッドボードで組んで光らせる（60分）
- [ ] 観察：[Falstad オームの法則](https://www.falstad.com/circuit/e-ohms.html)で、電圧を変えると電流の点の速さが変わることを見る（英語ですが、見るだけで分かります）
- [ ] 記録：今日組んだ回路を紙に回路図として描く

**2日目（火）オームの法則**

- [ ] 読む：[抵抗とオームの法則](https://chugaku.manabihiroba.net/rika/ohmhousoku.html)（20分）
- [ ] 解く：同ページの「オームの法則基本」と「計算1」「計算2」のPDF。単位をV・A・Ωにそろえてから計算する（40分）
- [ ] 検証：Tinkercadで9V電池＋1kΩを組み、マルチメーターを電流モードにして測る。手計算の9mAと一致するか確認（40分）
- [ ] 記録：計算値と測定値の比較表

**3日目（水）直列回路**

- [ ] 読む：[直列回路、並列回路の計算](https://chugaku.manabihiroba.net/rika/tyokuretuheiretukeisann.html)の直列部分（15分）
- [ ] 解く：同ページのPDF 1-1、1-2（40分）
- [ ] 演習：[SunFounder「3. マルチメーターの使い方を学ぶ」](https://docs.sunfounder.com/projects/inventor-lab-kit/ja/latest/lessons/3_multimeter.html)の手順を、1日目の回路とTinkercadのマルチメーターで再現する。電圧を測る → 電流計を回路の途中に入れて電流を測る → R = V ÷ I で回路全体の抵抗を出し、220Ωを引いてLED分を求める（50分）
- [ ] 記録：SunFounderの測定例（約5.13V、約13.5mA）と自分のTinkercadの値を並べ、違いの理由を1行

**4日目（木）並列回路と合成抵抗**

- [ ] 読む：[回路全体の抵抗](https://chugaku.manabihiroba.net/rika/kairoteiko.html)と[MONOist 電子工作“超”入門(4) キルヒホッフの法則](https://monoist.itmedia.co.jp/mn/articles/1501/26/news020.html)の合成抵抗の部分（40分）
- [ ] 演習：[SunFounder「4. オームの法則」](https://docs.sunfounder.com/projects/inventor-lab-kit/ja/latest/lessons/4_ohm%27s_law.html)の実験をTinkercadで行う。抵抗を100Ω→1kΩ→10kΩ→1MΩと替えてLEDの明るさと電流を記録し、電源を5Vから3.3Vに替えた場合も試す（30分）
- [ ] 演習：[SunFounder「5. 直列回路と並列回路」](https://docs.sunfounder.com/projects/inventor-lab-kit/ja/latest/lessons/5_parallel_series_circuit.html)の回路をTinkercadで組み、直列と並列でLEDにかかる電圧を比べる（30分）
- [ ] 記録：「直列で1個壊れると全部消え、並列だと残りが光る」理由を自分の言葉で2行

**5日目（金）電力**

- [ ] 読む：[電力と電力量](https://chugaku.manabihiroba.net/rika/denryokur.html)（20分）
- [ ] 解く：同ページのPDF 2枚（40分）
- [ ] 計算：2日目の回路（9V、1kΩ）で抵抗が消費する電力を求め、1/4W抵抗で足りるかを判断する（20分）
- [ ] 観察：[Falstad 抵抗の例題](https://www.falstad.com/circuit/e-resistors.html)で、抵抗値ごとの電流の違いを見る（20分）

**6日目（土）まとめと遅れの取り戻し**

- [ ] 解く：[いろいろな回路の計算](https://chugaku.manabihiroba.net/rika/iroiron.html)と[まとめ、総合問題](https://chugaku.manabihiroba.net/rika/denryukairomatome.html)
- [ ] 間違えた問題だけTinkercadで組んで確かめる
- [ ] `week1/README.md` に比較表と回路図の写真を置く

**7日目（日）休み**

## 第2週 分圧・回路図・コンデンサ

週のゴールは、分圧回路の出力を4つの変数のどれからでも計算でき、自分の回路をKiCadで回路図に起こせることです。センサーをマイコンにつなぐ回路のほとんどは分圧なので、ここは時間をかけます。

**8日目（月）分圧の式**

- [ ] 読む：[DigiKey「分圧器の基礎」](https://forum.digikey.com/t/topic/44004)の「分圧器を理解する」まで。電卓ツールは使わず、式の導き方を追う（30分）
- [ ] 解く：同記事末の問題3、4、5（手計算）（30分）
- [ ] 観察：[Falstad 分圧の例題](https://www.falstad.com/circuit/e-voltdivide.html)。10Vから5V、7.5V・5V・2.5Vを作る回路の電圧を確認（20分）
- [ ] 検証：Tinkercadで9V＋R1＋R2を組み、問題で解いた値を設定して測る（30分）

**9日目（火）負荷で電圧が下がる**

- [ ] 読む：同記事の「分圧負荷による電圧降下」（15分）
- [ ] 演習：Tinkercadで1kΩペア、100kΩペアの分圧をそれぞれ作り、出力に1kΩの負荷をつなぐ前後で電圧を測る。どちらが大きく下がるか、測る前に予想を書く（50分）
- [ ] 読む：[3つ以上の抵抗による分圧計算](https://forum.digikey.com/t/topic/45012)（20分）
- [ ] 記録：「センサーの分圧に大きすぎる抵抗を使うと何が困るか」を2行

**10日目（水）回路図の読み方とKiCad**

- [ ] 読む：[KiCad 入門ガイド（日本語）](https://docs.kicad.org/8.0/ja/getting_started_in_kicad/)の「基本概念とワークフロー」と「チュートリアル パート1・2（回路図）」（40分）
- [ ] KiCadをインストールし、ガイドに沿って最初の回路図を描く（50分）
- [ ] 注意：TinkercadとFalstadの抵抗はギザギザ記号（米国式）、KiCadや日本の教科書は四角記号です。同じ部品だと覚える

**11日目（木）回路図を自分で描く**

- [ ] 描く：第1週の直列・並列回路と、8日目の分圧回路をKiCadで描く（60分）
- [ ] TinkercadのCircuitsで、作った回路の回路図表示に切り替え、自分のKiCadの図と見比べる（20分）
- [ ] `week2/kicad/` にKiCadのプロジェクトと回路図のPDFを置く

**12日目（金）コンデンサの基礎**

- [ ] 読む：[MONOist 電子工作“超”入門(3) コンデンサを知ろう](https://monoist.itmedia.co.jp/mn/articles/1412/16/news026.html)（30分）
- [ ] 観察：[Falstad コンデンサの例題](https://www.falstad.com/circuit/e-cap.html)。スイッチで放電・充電を繰り返し、電圧（緑）と電流（黄）の波形の形を見る（30分）
- [ ] 実験：同じ例題で抵抗を2倍にし、充電にかかる時間がどう変わるか見る。時定数τ = R × C で予想してから確かめる（30分）

**13日目（土）コンデンサの計算とフィルタ**

- [ ] 読む：[MONOist 電子工作“超”入門(5) コンデンサを知る](https://monoist.itmedia.co.jp/mn/articles/1502/27/news035.html)（30分）
- [ ] 観察：[Falstad ローパスフィルタ（RC）](https://www.falstad.com/circuit/e-filt-lopass.html)。ノイズを消すフィルタの原型で、Month 2の移動平均と同じ考え方です（20分）
- [ ] 遅れの取り戻し

**14日目（日）休み**

## 第3週 ダイオード・トランジスタ・プルアップ・電池の内部抵抗

週のゴールは、マイコンの弱い信号で大きな電流を切り替える回路を設計でき、「モーターが止まるとマイコンがリセットする」理由を数字で説明できることです。

**15日目（月）LEDの抵抗を計算する**

- [ ] 観察：[Falstad ダイオードの例題](https://www.falstad.com/circuit/e-diodevar.html)。一方向にしか電流が流れないことを確認（20分）
- [ ] 読む：[DigiKey「LED用の適切な抵抗の選択」](https://forum.digikey.com/t/led/5558)。抵抗値と、抵抗に必要なワット数の求め方（20分）
- [ ] 計算：5V電源、赤LED（Vf約2V）、10mAのときの抵抗値と消費電力を手で求める（20分）
- [ ] 検証：Tinkercadで組み、電流計で10mA前後になるか確かめる（40分）

**16日目（火）トランジスタの仕組み**

- [ ] 読む：[MONOist 俺流！組み込み用語解説(2) トランジスタ](https://monoist.itmedia.co.jp/mn/articles/2406/26/news018.html)（2ページ、30分）
- [ ] 観察：[Falstad NPNトランジスタ](https://www.falstad.com/circuit/e-npn.html)と[Falstad トランジスタのスイッチ](https://www.falstad.com/circuit/e-transswitch.html)。小さいベース電流で大きいコレクタ電流が流れること、抵抗が電流を制限して「飽和」している状態を見る（40分）
- [ ] 記録：ベース・コレクタ・エミッタの役割を自分の言葉で3行（10分）

**17日目（水）トランジスタスイッチを設計する（筆者の課題）**

- [ ] 設計：Arduinoのピン（5V）でNPNトランジスタを動かし、9V電源からLED 3個を同時に光らせる回路を考える。コレクタ電流を決め、ベース電流は「コレクタ電流÷電流増幅率」より多めに取り、ベース抵抗を計算する（40分）
- [ ] 検証：Tinkercadで組み、ベース電流とコレクタ電流を測る。ピンから流れる電流が小さいことを確認（50分）
- [ ] KiCadで回路図に起こす（20分）

**18日目（木）プルアップとプルダウン**

- [ ] 読む：[MONOist 俺流！組み込み用語解説(3) プルアップ抵抗](https://monoist.itmedia.co.jp/mn/articles/2407/18/news027.html)（2ページ、30分）
- [ ] 演習：Tinkercadで5V、押しボタン、10kΩのプルダウン抵抗をつなぎ、ボタンを押したとき・離したときの入力点の電圧を測る（40分）
- [ ] 実験：プルダウン抵抗を外すと、離したときの電圧が決まらないことを確認し、理由を記録（20分）

**19日目（金）電池の内部抵抗とブラウンアウト**

- [ ] 読む：[乾電池の性質（内部抵抗と端子電圧）](https://center.esnet.ed.jp/uploads/07shiryo/05rika/04_kandentinoseisitu.pdf)。電流を多く流すほど端子電圧が下がる仕組み（20分）
- [ ] 実験：[Falstad](https://www.falstad.com/circuit/)で、6Vの電圧源に0.5Ωの抵抗（内部抵抗の代わり）を直列に入れ、負荷を100Ω→10Ω→2Ωと重くして端子電圧を記録（40分）
- [ ] 計算：マイコンが4.5Vを下回るとリセットすると仮定し、電流が何A流れたら下回るかを手で求める（20分）
- [ ] 記録：「モーターが止まると大電流が流れ、電圧が下がってマイコンがリセットする」を自分の数字で説明する（筆者のMonth 1マイルストーン）（20分）

**20日目（土）まとめ**

- [ ] 第1〜3週で間違えた計算問題をもう一度解く
- [ ] `week3/README.md` に、トランジスタスイッチの回路図、測定値、ブラウンアウトの説明を置く

**21日目（日）休み**

## 第4週 故障診断・統合課題・はんだ付けの座学

週のゴールは、壊れた回路の原因を仮想テスターで特定でき、Month 1の内容を1つの回路にまとめてGitHubで公開することです。

**22日目（月）故障診断の練習**

- [ ] 準備：第3週のトランジスタスイッチ回路をTinkercadで複製する
- [ ] 壊す：①ベース抵抗を100kΩにする ②LEDを1個逆向きにする ③配線を1本外す、の3パターンを別々に作る（30分）
- [ ] 診断：それぞれ、各点の電圧をテスターで測り、正常時の値と比べて原因を特定する。答えを知っていても、測定値だけから原因を言えるかを確かめる（60分）
- [ ] 記録：故障ごとに「症状 → 測った値 → 原因」を表にする（20分）

**23日目（火）統合課題の設計：暗くなると点灯する回路**

- [ ] 読む：[SunFounder「4.2 光を感じる」](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_photoresistor.html)で、光センサー（フォトレジスタ）を分圧で使う回路を確認（15分）
- [ ] 設計：光センサーと固定抵抗の分圧 → NPNトランジスタ → LED の回路を考える。暗いと光センサーの抵抗が大きくなることを使い、分圧の出力がトランジスタをオンにする向きに並べる（45分）
- [ ] KiCadで回路図を描き、明るいとき・暗いときの分圧出力を手計算しておく（30分）

**24日目（水）統合課題の製作と測定**

- [ ] Tinkercadで組み、光センサーの光量スライダーを動かして点灯・消灯を確認（40分）
- [ ] 測定：光量を5段階に変え、分圧出力の電圧とLEDの電流を表にする。23日目の手計算と比べる（40分）
- [ ] うまくいかなかった点と直し方を記録（20分）

**25日目（木）はんだ付けの座学**

- [ ] 読む：[RSコンポーネンツ「はんだ付けとは？方法や注意点」](https://jp.rs-online.com/web/content/discovery/ideas-and-advice/how-to-solder-guide)。安全、こて先の種類、はんだ除去（30分）
- [ ] 読む：[RSコンポーネンツ「マニュアルはんだ付けのツボ」](https://jp.rs-online.com/web/content/discovery/ideas-and-advice/solders-guide)。良いはんだと、イモはんだなど不良の見分け方（25分）
- [ ] 読む：[MONOist マイクロマウスで始める組み込み開発入門(2) 3ページ目](https://monoist.itmedia.co.jp/mn/spv/1206/07/news003_3.html)。秒数を数えながら進める手順（10分）
- [ ] メモ：実機を買ったときに使う「はんだ付けの手順」と「不良の見分け方」を自分用に1枚にまとめる（20分）

**26日目（金）GitHubで公開**

- [ ] `week4/README.md` に統合課題をまとめる。Tinkercadの画面、回路図、測定表、「何が壊れてどう直したか」の節を必ず入れる（筆者が最重視している部分）（90分）

**27日目（土）Month 1 マイルストーン確認**

- [ ] 回路図を見てTinkercadで組める
- [ ] 抵抗値が正しいかを、つなぐ前に計算で判断できる
- [ ] 仮想テスターで断線・逆接続・値違いを特定できる
- [ ] 「モーターが止まるとマイコンがリセットする理由」を数字で説明できる
- [ ] はんだ付けの手順と不良の見分け方を説明できる（実技は実機購入後）
- [ ] できなかった項目の日をやり直す

**28日目（日）休み**

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
- [ ] センサーの説明を読んで、配線と読み取りを自分で書ける
- [ ] 加速度とジャイロを合わせて安定した角度を出せる
- [ ] P・I・Dそれぞれの効き方を、自分のグラフを使って説明できる
- [ ] GitHubに、Month 2の作品（反応時間ゲーム、モーター制御、相補フィルタ、PD比較、移植した頭脳）を、うまくいかなかった点の記録付きで置く

**56日目（日）休み**

## 確認できなかったこと・注意点

URLはすべて実在を確認しましたが、確認の深さに2段階あります。始める前に、下の「要確認」だけ目を通してください。

- **中身まで開いて確認したページ**：中学学習プリントの一覧と「オームの法則」「直列・並列」「電力」の3単元とPDF1枚、SunFounderの「マルチメーター」「オームの法則」「割り込み」「反応時間ゲーム」「車輪を回す」「駐車補助」「内蔵ライブラリ（サーボ）」「ESP32 モーター」、DigiKeyの2記事、RSのはんだ付けガイド、Falstadの例題一覧と2例題、WokwiのMPU6050・A4988・Wi-Fi、Hacksterの相補フィルタ
- **一覧や目次で存在とタイトルを確認したページ**：上記以外のSunFounderの各レッスン、中学学習プリントの残りの単元、MONOistの各記事（検索結果で本文の一部を確認）、KiCadの日本語ガイド
- **要確認（Tinkercadの部品）**：L293D（Hブリッジ）と「エンコーダ付きDCモーター」がTinkercadの部品一覧にあるかは、使う日に部品検索で確かめてください。ない場合、40日目はWokwiのロータリーエンコーダで代用できます
- **SunFounderのコード**：多くのページはコードを外部のArduinoエディタで埋め込み表示しています。表示されない場合は、ページ内のリンクを開くか、説明文の抜粋から自分で書いてください
- **相補フィルタの記事の式**：Hacksterの記事はαの置き方が分かりにくいので、計算は47日目に書いた式（ジャイロ側0.98、加速度側0.02）で行ってください
- **古い記事**：MONOistの連載は2010〜2016年の記事です。電気の基礎とPWMの考え方は変わりませんが、部品の型番や価格は古い可能性があります
- **KiCad**：日本語ガイドはバージョン8向けです。最新版と画面が少し違う場合があります
