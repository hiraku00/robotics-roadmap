# フェーズ5 制御理論・運動学・画像処理

- 元記事：Month 5「The maths that makes robots actually work」
- 期間：第18〜22週（仮）
- 元記事との対応表：[トップのREADME](../README.md#month-5--フェーズ5ロボットを本当に動かす数学第1822週)
- 状態：計画のみ。始める前に日本語の教材を確認して、日別の CHECKLIST.md を作る

## 元記事の目標

これまでライブラリに任せていた、制御と画像処理の中身を理解して自分で実装すること。研究者のレベルは要らず、「制御を使いこなせる」「アームについて考えられるだけの運動学」「カメラから 3D の情報を取り出せるだけの画像処理」が目標です。

## 実機なしでの進め方

元記事の課題の多くは、もともとシミュレーションか Python です。実機を使う課題は次のように代えます。

- 倒立振子ロボット（Month 2 で作る前提）→ Python で倒立振子をシミュレーションして作る
- SO-101 アームの運動学 → フェーズ3で動かした SO-101 のモデルを使う
- カメラ → Mac の内蔵カメラと、印刷か画面に表示したチェスボード模様を使う

## 週の計画（仮）

| 週 | やること | 成果物 |
| --- | --- | --- |
| 第18週 | PID のそれぞれの働きと失敗の形、積分ワインドアップ、D 項がノイズを増やす理由、フィードフォワード。カルマンフィルタの入門 | 倒立振子を Python で作り、P・PD・PID＋フィードフォワードのステップ応答（目標を急に変えたときの追いつき方）を CSV に記録して1枚のグラフにする |
| 第19週 | 状態空間（状態・入力・出力でシステムを表す）、LQR（ゲインを計算で決める）、MPC（先を予測する制御）の考え方 | 台車型倒立振子（カートポール）で LQR と手調整の PID を比べ、外から押したときの戻り方をグラフにする |
| 第20週 | 同次変換、順運動学・逆運動学、ヤコビアン、特異点（ある姿勢で動けない方向ができる） | SO-101 の順運動学を手で計算して Robotics Toolbox と比べ、手先を指定した XYZ に動かす逆運動学を書く |
| 第21週 | カメラのキャリブレーション、ピンホールモデル、点群の基礎 | 内蔵カメラのキャリブレーション結果、色の付いた物の 3D 位置の推定。照明を変えて壊れたときの記録と直し方 |
| 第22週 | MoveIt 2（アームの動作計画） | シミュレーションのアームでのピック＆プレース。道をふさいで失敗させたときの記録 |

## 元記事の教材（英語）

- [Understanding PID Control（MATLAB Tech Talks）](https://www.mathworks.com/videos/series/understanding-pid-control.html)
- [Brian Douglas の制御の講義](https://www.youtube.com/@BrianBDouglas/playlists)と[本](https://engineeringmedia.com/books)
- [Control Bootcamp（Steve Brunton）](https://www.youtube.com/playlist?list=PLMrJAkhIeNNR20Mz-VpzgfQs5zrYi085m)
- [Kalman and Bayesian Filters in Python（Roger Labbe）](https://rlabbe.github.io/Kalman-and-Bayesian-Filters-in-Python/)（元記事では Month 2 の教材）
- [Underactuated Robotics（MIT, Russ Tedrake）](https://underactuated.csail.mit.edu/index.html)
- [Modern Robotics（Kevin Lynch）](http://hades.mech.northwestern.edu/index.php/Modern_Robotics)
- [Robotics Toolbox for Python（Peter Corke）](https://github.com/petercorke/robotics-toolbox-python)、[QUT Robot Academy](https://robotacademy.net.au)
- [OpenCV Bootcamp](https://courses.opencv.org/courses/course-v1:OpenCV+Bootcamp+CV0/about)、[OpenCV カメラキャリブレーション](https://docs.opencv.org/4.x/dc/dbb/tutorial_py_calibration.html)
- [Open3D 点群チュートリアル](https://www.open3d.org/docs/release/tutorial/geometry/pointcloud.html)
- [MoveIt 2 Getting Started](https://moveit.picknik.ai/main/doc/tutorials/getting_started/getting_started.html)、[Robotic Manipulation（MIT）](https://manipulation.csail.mit.edu/)

## 到達目標（元記事の Month 5 Milestone）

- [ ] PID 制御を実装・調整し、すべての項を測ったデータで説明できる
- [ ] システムを状態空間で書き、シミュレーションの対象に LQR を実装できる
- [ ] 順運動学を手で計算し、逆運動学を数値計算で解ける
- [ ] 特異点とは何かを、ロボットがそうなっているところを指して説明できる（シミュレーションで）
- [ ] カメラをキャリブレーションし、画像の1点を 3D の位置に変換できる
- [ ] MoveIt 2 で、ぶつからないピック＆プレースを計画して実行できる（シミュレーションで）

## 始める前に確かめること

- 制御理論・運動学・OpenCV の日本語の教材（大学の講義資料や書籍）
- Mac の内蔵カメラで OpenCV のキャリブレーションが動くか
- MoveIt 2 を ros2_ws の Docker 環境で動かせるか
