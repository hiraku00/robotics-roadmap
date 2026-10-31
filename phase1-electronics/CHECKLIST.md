# フェーズ1 電子回路 日別チェックリスト

第1〜4週（1〜28日目）の日別チェックリストです。終わった項目は `- [ ]` を `- [x]` に変えてコミットしてください。進め方は[トップのREADME](../README.md#進め方)、用語は[用語集](../GLOSSARY.md)、教材の一覧と確認状況は[MATERIALS.md](../MATERIALS.md)にあります。

## 第1週 オームの法則・直列並列・電力

記録：[week1/README.md](week1/README.md)

週のゴールは、抵抗が2〜3本の回路の電流・電圧・電力を手で計算し、Tinkercadの仮想テスターで答え合わせできることです。

**1日目 回路と記号** → [記録](week1/README.md#1日目-回路と記号)

- [x] 読む：[回路と電気記号](https://chugaku.manabihiroba.net/rika/kairo.html)と[回路を流れる電流と電圧の性質](https://chugaku.manabihiroba.net/rika/denryudenatus.html)（30分）
- [x] Tinkercadにアカウントを作る：[Tinkercad Circuits](https://www.tinkercad.com/circuits)
- [x] 演習：[SunFounder「2. 初めての回路」](https://docs.sunfounder.com/projects/inventor-lab-kit/ja/latest/lessons/2_first_circuit.html)を読み、同じ回路（Arduinoの5V → 220Ω → LED → GND）をTinkercadのブレッドボードで組んで光らせる（60分）
- [x] 観察：[Falstad オームの法則](https://www.falstad.com/circuit/e-ohms.html)で、電圧を変えると電流の点の速さが変わることを見る（英語ですが、見るだけで分かります）
- [x] 記録：今日組んだ回路を紙に回路図として描く

**2日目 オームの法則** → [記録](week1/README.md#2日目-オームの法則)

- [x] 読む：[抵抗とオームの法則](https://chugaku.manabihiroba.net/rika/ohmhousoku.html)（20分）
- [x] 解く：同ページの「オームの法則基本」と「計算1」「計算2」のPDF。単位をV・A・Ωにそろえてから計算する（40分）
- [x] 検証：Tinkercadで9V電池＋1kΩを組み、マルチメーターを電流モードにして測る。手計算の9mAと一致するか確認（40分）
- [x] 記録：計算値と測定値の比較表

**3日目 直列回路** → [記録](week1/README.md#3日目-直列回路)

- [x] 読む：[直列回路、並列回路の計算](https://chugaku.manabihiroba.net/rika/tyokuretuheiretukeisann.html)の直列部分（15分）
- [x] 解く：同ページのPDF 1-1、1-2（40分）
- [x] 演習：[SunFounder「3. マルチメーターの使い方を学ぶ」](https://docs.sunfounder.com/projects/inventor-lab-kit/ja/latest/lessons/3_multimeter.html)の手順を、1日目の回路とTinkercadのマルチメーターで再現する。電圧を測る → 電流計を回路の途中に入れて電流を測る → R = V ÷ I で回路全体の抵抗を出し、220Ωを引いてLED分を求める（50分）
- [x] 記録：SunFounderの測定例（約5.13V、約13.5mA）と自分のTinkercadの値を並べ、違いの理由を1行

**4日目 並列回路と合成抵抗** → [記録](week1/README.md#4日目-並列回路と合成抵抗)

- [x] 読む：[回路全体の抵抗](https://chugaku.manabihiroba.net/rika/kairoteiko.html)と[MONOist 電子工作“超”入門(4) キルヒホッフの法則](https://monoist.itmedia.co.jp/mn/articles/1501/26/news020.html)の合成抵抗の部分（40分）
- [x] 演習：[SunFounder「4. オームの法則」](https://docs.sunfounder.com/projects/inventor-lab-kit/ja/latest/lessons/4_ohm%27s_law.html)の実験をTinkercadで行う。抵抗を100Ω→1kΩ→10kΩ→1MΩと替えてLEDの明るさと電流を記録し、電源を5Vから3.3Vに替えた場合も試す（30分）
- [x] 演習：[SunFounder「5. 直列回路と並列回路」](https://docs.sunfounder.com/projects/inventor-lab-kit/ja/latest/lessons/5_parallel_series_circuit.html)の回路をTinkercadで組み、直列と並列でLEDにかかる電圧を比べる（30分）
- [x] 記録：「直列で1個壊れると全部消え、並列だと残りが光る」理由を自分の言葉で2行

**5日目 電力** → [記録](week1/README.md#5日目-電力)

- [x] 読む：[電力と電力量](https://chugaku.manabihiroba.net/rika/denryokur.html)（20分）
- [x] 解く：同ページのPDF 2枚（40分）
- [x] 計算：2日目の回路（9V、1kΩ）で抵抗が消費する電力を求め、1/4W抵抗で足りるかを判断する（20分）
- [x] 観察：[Falstad 抵抗の例題](https://www.falstad.com/circuit/e-resistors.html)で、抵抗値ごとの電流の違いを見る（20分）

**6日目 まとめと遅れの取り戻し** → [記録](week1/README.md#6日目-まとめと遅れの取り戻し)

- [x] 解く：[いろいろな回路の計算](https://chugaku.manabihiroba.net/rika/iroiron.html)と[まとめ、総合問題](https://chugaku.manabihiroba.net/rika/denryukairomatome.html)
- [x] 間違えた問題だけTinkercadで組んで確かめる
- [x] 読む：[Arrow「抵抗のカラーコードの読み方」](https://www.arrow.com/ja/resources/articles/2023/11/how-to-read-resistor-color-code.html)。抵抗の胴体に巻かれた色の帯から抵抗値を読む方法（15分）
- [x] 練習：Tinkercadで抵抗を5本置き、値を見ないで色の帯だけから抵抗値を当てる。そのあと設定値を見て答え合わせ。元記事の課題「抵抗5本を色の帯と照らし合わせる」の代わりです（20分）
- [x] `week1/README.md` に比較表と回路図の写真を置く

**7日目 休み**

## 第2週 分圧・回路図・コンデンサ

記録：[week2/README.md](week2/README.md)

週のゴールは、分圧回路の出力を4つの変数のどれからでも計算でき、自分の回路をKiCadで回路図に起こせることです。センサーをマイコンにつなぐ回路のほとんどは分圧なので、ここは時間をかけます。

**8日目 分圧の式** → [記録](week2/README.md#8日目-分圧の式)

- [x] 読む：[DigiKey「分圧器の基礎」](https://forum.digikey.com/t/topic/44004)の「分圧器を理解する」まで。電卓ツールは使わず、式の導き方を追う（30分）
- [x] 解く：同記事末の問題3、4、5（手計算）（30分）
- [x] 観察：[Falstad 分圧の例題](https://www.falstad.com/circuit/e-voltdivide.html)。10Vから5V、7.5V・5V・2.5Vを作る回路の電圧を確認（20分）
- [x] 検証：Tinkercadで9V＋R1＋R2を組み、問題で解いた値を設定して測る（30分）

**9日目 負荷で電圧が下がる** → [記録](week2/README.md#9日目-負荷で電圧が下がる)

- [x] 読む：同記事の「分圧負荷による電圧降下」（15分）
- [x] 演習：Tinkercadで1kΩペア、100kΩペアの分圧をそれぞれ作り、出力に1kΩの負荷をつなぐ前後で電圧を測る。どちらが大きく下がるか、測る前に予想を書く（50分）
- [x] 読む：[3つ以上の抵抗による分圧計算](https://forum.digikey.com/t/topic/45012)（20分）
- [x] 記録：「センサーの分圧に大きすぎる抵抗を使うと何が困るか」を2行

**10日目 回路図の読み方とKiCad** → [記録](week2/README.md#10日目-回路図の読み方とkicad)

- [x] 読む：[KiCad 10.0 入門ガイド](https://docs.kicad.org/10.0/ja/getting_started_in_kicad/getting_started_in_kicad.html)（中身は英語。Chrome の翻訳で読む）の「基本概念とワークフロー」と「チュートリアル パート1・2（回路図）」（40分）
- [x] KiCad 10.0 をインストールし、ガイドに沿って最初の回路図を描く（50分）
- [x] 注意：抵抗の記号は四角（IEC 式・日本の教科書）とギザギザ（米国式・Falstad）。Tinkercad の回路図表示は四角の2種類。KiCad はどちらも選べる（Device:R が四角、Device:R_US がギザギザ）。同じ部品だと覚える

**11日目 回路図を自分で描く** → [記録](week2/README.md#11日目-回路図を自分で描く)

- [x] 描く：第1週の直列・並列回路と、8日目の分圧回路をKiCadで描く（60分）
- [x] TinkercadのCircuitsで、作った回路の回路図表示に切り替え、自分のKiCadの図と見比べる（20分）
- [x] `week2/kicad/` にKiCadのプロジェクトと回路図のPDFを置く

**12日目 コンデンサの基礎** → [記録](week2/README.md#12日目-コンデンサの基礎)

- [x] 読む：[MONOist 電子工作“超”入門(3) コンデンサを知ろう](https://monoist.itmedia.co.jp/mn/articles/1412/16/news026.html)（30分）
- [x] 観察：[Falstad コンデンサの例題](https://www.falstad.com/circuit/e-cap.html)。スイッチで放電・充電を繰り返し、電圧（緑）と電流（黄）の波形の形を見る（30分）
- [x] 実験：同じ例題で抵抗を2倍にし、充電にかかる時間がどう変わるか見る。時定数τ = R × C で予想してから確かめる（30分）

**13日目 コンデンサの計算とフィルタ** → [記録](week2/README.md#13日目-コンデンサの計算とフィルタ)

- [x] 読む：[MONOist 電子工作“超”入門(5) コンデンサを知る](https://monoist.itmedia.co.jp/mn/articles/1502/27/news035.html)（30分）
- [x] 観察：[Falstad ローパスフィルタ（RC）](https://www.falstad.com/circuit/e-filt-lopass.html)。ノイズを消すフィルタの原型で、Month 2の移動平均と同じ考え方です（20分）
- [x] 読む：[MONOist 俺流！組み込み用語解説(11) コンデンサー活用術](https://monoist.itmedia.co.jp/mn/spv/2502/06/news039.html)と[RSコンポーネンツ「バイパスコンデンサとは？」](https://jp.rs-online.com/web/content/discovery/ideas-and-advice/bypass-capacitor-guide)。IC（マイコンなどの部品）の電源ピンのすぐそばに置く小さなコンデンサ「パスコン（デカップリングコンデンサ）」の役割（30分）
- [x] 記録：「なぜ0.1μFのパスコンを、ICの電源ピンの近くに置くのか」を2行（元記事が名指しで求めている知識です）
- [x] 遅れの取り戻し

**14日目 休み**

## 第3週 ダイオード・トランジスタ・プルアップ・電池の内部抵抗

記録：[week3/README.md](week3/README.md)

週のゴールは、マイコンの弱い信号で大きな電流を切り替える回路を設計でき、「モーターが止まるとマイコンがリセットする」理由を数字で説明できることです。

**15日目 LEDの抵抗を計算する** → [記録](week3/README.md#15日目-ledの抵抗を計算する)

- [x] 観察：[Falstad ダイオードの例題](https://www.falstad.com/circuit/e-diodevar.html)。一方向にしか電流が流れないことを確認（20分）
- [x] 読む：[DigiKey「LED用の適切な抵抗の選択」](https://forum.digikey.com/t/led/5558)。抵抗値と、抵抗に必要なワット数の求め方（20分）
- [x] 計算：5V電源、赤LED（Vf約2V）、10mAのときの抵抗値と消費電力を手で求める（20分）
- [x] 検証：Tinkercadで組み、電流計で10mA前後になるか確かめる（40分）

**16日目 トランジスタの仕組み** → [記録](week3/README.md#16日目-トランジスタの仕組み)

- [x] 読む：[MONOist 俺流！組み込み用語解説(2) トランジスタ](https://monoist.itmedia.co.jp/mn/articles/2406/26/news018.html)（2ページ、30分）
- [x] 観察：[Falstad NPNトランジスタ](https://www.falstad.com/circuit/e-npn.html)と[Falstad トランジスタのスイッチ](https://www.falstad.com/circuit/e-transswitch.html)。小さいベース電流で大きいコレクタ電流が流れること、抵抗が電流を制限して「飽和」している状態を見る（40分）
- [x] 記録：ベース・コレクタ・エミッタの役割を自分の言葉で3行（10分）

**17日目 トランジスタスイッチを設計する（筆者の課題）** → [記録](week3/README.md#17日目-トランジスタスイッチを設計する筆者の課題)

- [ ] 設計：Arduinoのピン（5V）でNPNトランジスタを動かし、9V電源からLED 3個を同時に光らせる回路を考える。コレクタ電流を決め、ベース電流は「コレクタ電流÷電流増幅率」より多めに取り、ベース抵抗を計算する（40分）
- [ ] 検証：Tinkercadで組み、ベース電流とコレクタ電流を測る。ピンから流れる電流が小さいことを確認（50分）
- [ ] KiCadで回路図に起こす（20分）

**18日目 プルアップとプルダウン** → [記録](week3/README.md#18日目-プルアップとプルダウン)

- [ ] 読む：[MONOist 俺流！組み込み用語解説(3) プルアップ抵抗](https://monoist.itmedia.co.jp/mn/articles/2407/18/news027.html)（2ページ、30分）
- [ ] 演習：Tinkercadで5V、押しボタン、10kΩのプルダウン抵抗をつなぎ、ボタンを押したとき・離したときの入力点の電圧を測る（40分）
- [ ] 実験：プルダウン抵抗を外すと、離したときの電圧が決まらないことを確認し、理由を記録（20分）

**19日目 電池の内部抵抗とブラウンアウト** → [記録](week3/README.md#19日目-電池の内部抵抗とブラウンアウト)

- [ ] 読む：[乾電池の性質（内部抵抗と端子電圧）](https://center.esnet.ed.jp/uploads/07shiryo/05rika/04_kandentinoseisitu.pdf)。電流を多く流すほど端子電圧が下がる仕組み（20分）
- [ ] 実験：[Falstad](https://www.falstad.com/circuit/)で、6Vの電圧源に0.5Ωの抵抗（内部抵抗の代わり）を直列に入れ、負荷を100Ω→10Ω→2Ωと重くして端子電圧を記録（40分）
- [ ] 計算：マイコンが4.5Vを下回るとリセットすると仮定し、電流が何A流れたら下回るかを手で求める（20分）
- [ ] 記録：「モーターが止まると大電流が流れ、電圧が下がってマイコンがリセットする」を自分の数字で説明する（筆者のMonth 1マイルストーン）（20分）
- [ ] 読む：[高山無線「ドローン用バッテリーのすべて」](https://www.takayama-musen.com/drone/battery-guide/)と[計測技術研究所「バッテリーのCレートって、そもそもナニ？」](https://www.keisoku.co.jp/u-po/20260219-04/)。ロボットでよく使うリポ（LiPo）電池の「セル数（2S＝約7.4Vなど）」「Cレート（取り出せる電流の目安）」と、充電中に目を離さない理由（30分）
- [ ] 計算：2200mAh・30Cのリポで取り出せる最大電流、最大20Aのモーターに1000mAhの電池なら何C以上が必要か、の2問（10分）

**20日目 まとめ** → [記録](week3/README.md#20日目-まとめ)

- [ ] 第1〜3週で間違えた計算問題をもう一度解く
- [ ] `week3/README.md` に、トランジスタスイッチの回路図、測定値、ブラウンアウトの説明を置く

**21日目 休み**

## 第4週 故障診断・統合課題・はんだ付けの座学

記録：[week4/README.md](week4/README.md)

週のゴールは、壊れた回路の原因を仮想テスターで特定でき、Month 1の内容を1つの回路にまとめてGitHubで公開することです。

**22日目 故障診断の練習** → [記録](week4/README.md#22日目-故障診断の練習)

- [ ] 準備：第3週のトランジスタスイッチ回路をTinkercadで複製する
- [ ] 壊す：①ベース抵抗を100kΩにする ②LEDを1個逆向きにする ③配線を1本外す、の3パターンを別々に作る（30分）
- [ ] 診断：それぞれ、各点の電圧をテスターで測り、正常時の値と比べて原因を特定する。答えを知っていても、測定値だけから原因を言えるかを確かめる（60分）
- [ ] 記録：故障ごとに「症状 → 測った値 → 原因」を表にする（20分）

**23日目 統合課題の設計：暗くなると点灯する回路** → [記録](week4/README.md#23日目-統合課題の設計暗くなると点灯する回路)

- [ ] 読む：[SunFounder「4.2 光を感じる」](https://docs.sunfounder.com/projects/3in1-kit-v2/ja/latest/basic_project/ar_photoresistor.html)で、光センサー（フォトレジスタ）を分圧で使う回路を確認（15分）
- [ ] 設計：光センサーと固定抵抗の分圧 → NPNトランジスタ → LED の回路を考える。暗いと光センサーの抵抗が大きくなることを使い、分圧の出力がトランジスタをオンにする向きに並べる（45分）
- [ ] KiCadで回路図を描き、明るいとき・暗いときの分圧出力を手計算しておく（30分）

**24日目 統合課題の製作と測定** → [記録](week4/README.md#24日目-統合課題の製作と測定)

- [ ] Tinkercadで組み、光センサーの光量スライダーを動かして点灯・消灯を確認（40分）
- [ ] 測定：光量を5段階に変え、分圧出力の電圧とLEDの電流を表にする。23日目の手計算と比べる（40分）
- [ ] うまくいかなかった点と直し方を記録（20分）

**25日目 はんだ付けの座学** → [記録](week4/README.md#25日目-はんだ付けの座学)

- [ ] 読む：[RSコンポーネンツ「はんだ付けとは？方法や注意点」](https://jp.rs-online.com/web/content/discovery/ideas-and-advice/how-to-solder-guide)。安全、こて先の種類、はんだ除去（30分）
- [ ] 読む：[RSコンポーネンツ「マニュアルはんだ付けのツボ」](https://jp.rs-online.com/web/content/discovery/ideas-and-advice/solders-guide)。良いはんだと、イモはんだなど不良の見分け方（25分）
- [ ] 読む：[MONOist マイクロマウスで始める組み込み開発入門(2) 3ページ目](https://monoist.itmedia.co.jp/mn/spv/1206/07/news003_3.html)。秒数を数えながら進める手順（10分）
- [ ] メモ：実機を買ったときに使う「はんだ付けの手順」と「不良の見分け方」を自分用に1枚にまとめる（20分）

**26日目 GitHubで公開** → [記録](week4/README.md#26日目-githubで公開)

- [ ] `week4/README.md` に統合課題をまとめる。Tinkercadの画面、回路図、測定表、「何が壊れてどう直したか」の節を必ず入れる（筆者が最重視している部分）（90分）

**27日目 Month 1 マイルストーン確認** → [記録](week4/README.md#27日目-month-1-マイルストーン確認)

- [ ] 回路図を見てTinkercadで組める
- [ ] 抵抗値が正しいかを、つなぐ前に計算で判断できる
- [ ] 仮想テスターで断線・逆接続・値違いを特定できる
- [ ] 「モーターが止まるとマイコンがリセットする理由」を数字で説明できる
- [ ] はんだ付けの手順と不良の見分け方を説明できる（実技は実機購入後）
- [ ] できなかった項目の日をやり直す

**28日目 休み**

