# フェーズ3 機構設計・CAD・部品を自分で作る

- 元記事：Month 3「Mechanical design, CAD and manufacturing your own parts」
- 期間：第9〜12週（仮）
- 元記事との対応表：[トップのREADME](../README.md#month-3--フェーズ3機構設計cad部品を自分で作る第912週)
- 状態：計画のみ。始める前に日本語の教材を確認して、日別の CHECKLIST.md を作る

## 元記事の目標

CAD（コンピュータで部品の形を設計するソフト）で部品を設計し、作り、ちゃんとはまること。元記事は「キットを組み立てる人と、ロボットを作る人を分ける月」と書いています。

## 実機なしでの進め方

3D プリンタも SO-101 アームも持っていないので、**設計までは全部やり、印刷と組み立ては実機待ち**にします。アームは、元記事が「$0 の選択肢」として挙げている MuJoCo（物理シミュレータ）のモデルで代わりにします。設計したデータは残しておけば、プリンタを買ったときや出力サービスに頼むときにそのまま使えます。

## 週の計画（仮）

| 週 | やること | 成果物 |
| --- | --- | --- |
| 第9週 | CAD を1つ選んで基本操作を覚える。スケッチ、寸法の拘束（線の長さや角度を固定すること）、押し出し、変数で寸法を決める設計 | 簡単な部品3つ。変数を1つ変えると形が追従することを確かめる |
| 第10週 | アセンブリ（部品の組み合わせ）と、データシートの寸法図から部品を設計する方法。STEP（共有用）と STL（印刷用）の書き出し | サーボ（SG90 など）を固定するブラケット。ねじ穴と軸の逃げを寸法図どおりに |
| 第11週 | 3D プリント向けの設計ルール（壁の厚さ、印刷の向き、はみ出し、すき間）と材料の使い分け。ギア比の計算と減速機（回転を遅くして力を強くする仕組み） | 接着剤なしで閉まる ESP32 ケースの設計、遊星ギア減速機の設計 |
| 第12週 | SO-101 のモデルを MuJoCo で動かし、関節の数と動ける範囲を確かめる。グリッパー指（物をつかむ爪）を CAD で設計する | SO-101 が動く画面録画、自作のグリッパー指の設計データ |

## 元記事の教材（英語）

日本語で代わりになるものは、このフェーズを始める前に探して [MATERIALS.md](../MATERIALS.md) に足します。

- CAD の選び方：Onshape（ブラウザで動く。無料版は作ったものがすべて公開される）、Fusion Personal（非商用なら無料）、FreeCAD（無料・オープンソース。1.1 が2026年3月に出た）
- [Onshape Learning Center, Fundamentals: CAD](https://learn.onshape.com/learning-paths/onshape-fundamentals-cad)
- [Product Design Online, Learn Autodesk Fusion in 30 Days](https://productdesignonline.com/learn-autodesk-fusion-360-in-30-days-official-course/)
- [MangoJelly Solutions（FreeCAD の動画）](https://www.youtube.com/@MangoJellySolutions)
- [Protolabs Network, Design for 3D printing](https://www.hubs.com/knowledge-base/design-for-3d-printing/)
- [Clearance and Tolerance 3D Printer Gauge](https://www.printables.com/model/57067-clearance-and-tolerance-3d-printer-gauge)
- [SO-ARM100（SO-101 の設計データ）](https://github.com/TheRobotStudio/SO-ARM100)
- [EEZYbotARM MK2（趣味用サーボで作る安いアーム）](https://www.thingiverse.com/thing:1454048)

## 到達目標（元記事の Month 3 Milestone）

- [ ] データシートから、寸法がすべて拘束された CAD の部品を作れる
- [ ] 自分のプリンタの本当のすき間を、測った数字で言える（実機待ち）
- [ ] 印刷の向き、はみ出し、層の接着を考えて、FDM（一般的な 3D プリンタの方式）向けの部品を設計できる
- [ ] PLA・PETG・ABS・TPU のどれを使うかを、部品ごとに理由をつけて選べる
- [ ] バックラッシ（歯車のガタ）とは何かを説明し、自分が作ったもので見せられる（説明まで。見せるのは実機待ち）
- [ ] 自分で組み、調整し、自作の部品で改造したロボットアームを見せられる（MuJoCo のモデルと設計データで代わりにする）

## 始める前に確かめること

- Mac（Apple Silicon）で使う CAD をどれにするか（Onshape はブラウザ、FreeCAD と Fusion は Mac 版あり）
- SO-ARM100 のリポジトリに、MuJoCo で読み込めるモデルが入っているか
