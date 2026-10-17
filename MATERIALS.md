# 教材一覧と確認状況

フェーズ1〜2で使う教材の一覧です。URLは2026年10月17日に実在を確認しました。フェーズ3〜6の教材は、そのフェーズを始める前に日本語のものを探して確認し、ここに追記します。

## 主な教材

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
| [MONOist 俺流！組み込み用語解説(8) チャタリング対策](https://monoist.itmedia.co.jp/mn/articles/2411/13/news015.html)、[(10) ロータリーエンコーダー](https://monoist.itmedia.co.jp/mn/articles/2501/14/news006.html)、[(11) コンデンサー活用術](https://monoist.itmedia.co.jp/mn/spv/2502/06/news039.html) | 日本語 | ソフトウェアでのチャタリング対策、エンコーダの仕組み、パスコンの役割。数式を使わない入門向け連載 | 2、5、6 |
| [RSコンポーネンツ「バイパスコンデンサとは？」](https://jp.rs-online.com/web/content/discovery/ideas-and-advice/bypass-capacitor-guide) | 日本語 | パスコンの役割、ICのそばに置く理由、0.1μFなど容量の目安 | 2 |
| [高山無線「ドローン用バッテリーのすべて」](https://www.takayama-musen.com/drone/battery-guide/)と[計測技術研究所「バッテリーのCレートって、そもそもナニ？」](https://www.keisoku.co.jp/u-po/20260219-04/) | 日本語 | セル数と電圧（2S＝7.4Vなど）、充電・保管の注意、Cレートの定義と計算例 | 3 |
| [Arrow「抵抗のカラーコードの読み方」](https://www.arrow.com/ja/resources/articles/2023/11/how-to-read-resistor-color-code.html) | 日本語 | 4本帯・5本帯の読み方。色と数字の表は画像 | 1 |
| [おもろ家「Arduino 入門 番外編 06【I2C通信 とは】」](https://omoroya.com/arduino-extra-edition-06/) | 日本語 | I2CのSDA・SCL、マスターとスレーブ、I2Cアドレスの調べ方、Wireライブラリ | 7 |
| [Tinkercad Circuits](https://www.tinkercad.com/circuits) | 日本語UI | 仮想ブレッドボード、Arduino UNO、マルチメーター、モーター、サーボ、超音波センサー | 全週 |
| [Wokwi Docs](https://docs.wokwi.com/) | 英語のみ | ESP32、MPU6050、A4988とステッピングモーター、HC-SR04の部品説明と例題。日本語の解説は見つからず | 6〜8 |
| [Falstad 回路シミュレータ 例題一覧](https://www.falstad.com/circuit/e-index.html) | 英語のみ | 電流の動きをアニメーションで見る例題。説明文は短く、見るのが中心 | 1〜3 |

## 確認できなかったこと・注意点

URLはすべて実在を確認しましたが、確認の深さに2段階あります。始める前に、下の「要確認」だけ目を通してください。

- **中身まで開いて確認したページ**：中学学習プリントの一覧と「オームの法則」「直列・並列」「電力」の3単元とPDF1枚、SunFounderの「マルチメーター」「オームの法則」「割り込み」「反応時間ゲーム」「車輪を回す」「駐車補助」「内蔵ライブラリ（サーボ）」「ESP32 モーター」、DigiKeyの2記事、RSのはんだ付けガイド、Falstadの例題一覧と2例題、WokwiのMPU6050・A4988・Wi-Fi、Hacksterの相補フィルタ、MONOist 俺流！組み込み用語解説の(8)(10)(11)、RSのバイパスコンデンサ、高山無線と計測技術研究所のバッテリー解説、Arrowのカラーコード、おもろ家のI2C、ros2_wsのREADME
- **一覧や目次で存在とタイトルを確認したページ**：上記以外のSunFounderの各レッスン、中学学習プリントの残りの単元、MONOistの各記事（検索結果で本文の一部を確認）、KiCadの日本語ガイド
- **要確認（Tinkercadの部品）**：L293D（Hブリッジ）と「エンコーダ付きDCモーター」がTinkercadの部品一覧にあるかは、使う日に部品検索で確かめてください。ない場合、40日目はWokwiのロータリーエンコーダで代用できます
- **SunFounderのコード**：多くのページはコードを外部のArduinoエディタで埋め込み表示しています。表示されない場合は、ページ内のリンクを開くか、説明文の抜粋から自分で書いてください
- **相補フィルタの記事の式**：Hacksterの記事はαの置き方が分かりにくいので、計算は47日目に書いた式（ジャイロ側0.98、加速度側0.02）で行ってください
- **古い記事**：MONOistの連載は2010〜2016年の記事です。電気の基礎とPWMの考え方は変わりませんが、部品の型番や価格は古い可能性があります
- **KiCad**：日本語ガイドはバージョン8向けです。最新版と画面が少し違う場合があります
