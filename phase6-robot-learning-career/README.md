# フェーズ6 ロボット学習・専門の選択・就職準備

- 元記事：Month 6「Robot learning, specialisation, and becoming hireable」
- 期間：第23〜26週（仮）
- 元記事との対応表：[トップのREADME](../README.md#month-6--フェーズ6ロボット学習専門の選択採用される準備第2326週)
- 状態：計画のみ。始める前に日本語の教材を確認して、日別の CHECKLIST.md を作る

## 元記事の目標

方向を1つ選び、その分野のポートフォリオ作品を作って、応募を始めること。前半はロボットにお手本から学ばせる最新の方法、後半はこれまで作ったものを「採用される形」にまとめる作業です。

## 実機なしでの進め方

元記事の中心の課題（自分の SO-101 でお手本を50回記録して学習させる）は実機待ちです。代わりに、元記事が「ハードウェア不要」と書いている Hugging Face Robotics Course と、シミュレーションの環境・公開データセットで、記録 → 学習 → 実行の流れを一通り試します。強化学習は元記事でも Colab（Google の無料の計算環境）で行うので、そのままやります。

## 週の計画（仮）

| 週 | やること | 成果物 |
| --- | --- | --- |
| 第23週 | LeRobot（Hugging Face のロボット学習ライブラリ）と Hugging Face Robotics Course。お手本をまねる学習（模倣学習）と ACT | 公開データセットかシミュレーションで ACT を学習させ、成功率を記録する |
| 第24週 | VLA（画像と言葉から動作を出す大きなモデル）の座学。MuJoCo Playground での強化学習 | 四足歩行の学習を Colab で動かし、報酬関数を変えたときの歩き方の違いを記録する |
| 第25週 | 3つの方向から1つを選ぶ。良い作品を3つ選んで README を書き直す | 各 README の一番上に動画（画面録画）、構成図、測った数値、「何が壊れてどう直したか」 |
| 第26週 | 面接の準備。自分のコードについて20分質問してもらう練習 | 想定質問と答えのメモ。3段階まで深く答えられなかった所の直し |

## 元記事の3つの方向

| 方向 | 向いている人 | 重点 |
| --- | --- | --- |
| ① ロボット学習・エンボディド AI | 最先端の会社を目指す。一番給料が高く、一番競争が激しい | LeRobot、VLA の微調整、模倣学習、強化学習、シミュレーション、PyTorch |
| ② 自律移動・モバイルロボット | 求人の数が一番多い | ROS 2、Nav2、SLAM、画像処理、センサーフュージョン、C++ |
| ③ 組み込み・メカトロニクス・システム統合 | すぐ働きたい。業務委託も含む | ファームウェア、モーター制御、リアルタイム処理、PLC、機能安全、システム統合 |

## 元記事の教材（英語）

- [LeRobot ドキュメント](https://huggingface.co/docs/lerobot/index)、[LeRobot リポジトリ](https://github.com/huggingface/lerobot)
- [Hugging Face Robotics Course](https://huggingface.co/learn/robotics-course/unit0/1)（ハードウェア不要、1ユニット30〜45分）
- [SO-101 セットアップガイド](https://huggingface.co/docs/lerobot/so101)（実機を買ったとき用）
- [MuJoCo Playground](https://github.com/google-deepmind/mujoco_playground)（Colab のチュートリアル4つ）
- [CS 285 Deep Reinforcement Learning（UC Berkeley）](https://rail.eecs.berkeley.edu/deeprlcourse)
- VLA：[openpi（π₀ など）](https://github.com/Physical-Intelligence/openpi)、[OpenVLA](https://openvla.github.io/)、[GR00T](https://github.com/Nvidia/Isaac-GR00T)、[SmolVLA](https://huggingface.co/lerobot/smolvla_base)
- [Glassdoor のロボティクスエンジニア面接質問](https://www.glassdoor.com/Interview/robotics-engineer-interview-questions-SRCH_KO0,17.htm)

## 到達目標（元記事の Month 6 Milestone）

- [ ] お手本のデータセットを記録し、自分のハードウェアで動く方策を学習させる（実機待ち。シミュレーションで流れを再現）
- [ ] 行動クローニング、ACT、Diffusion Policy の違いを説明できる
- [ ] どの VLA が重みを公開していて、どれがしていないかを言える
- [ ] 3つの方向のどれを目指すかと、その理由を言える
- [ ] 動画・数値・失敗の分析つきのポートフォリオ作品を3つ見せられる
- [ ] 自分のコードのどの行についても、3段階の追加質問に答えられる

## 始める前に確かめること

- LeRobot のシミュレーション環境が Mac（Apple Silicon）で動くか、Colab を使うか
- ロボット学習の日本語の教材や解説記事
