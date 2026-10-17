# フェーズ4 ROS 2・シミュレーション・自律移動

- 元記事：Month 4「ROS 2, simulation, and building robots the way companies do」
- 期間：第13〜17週（仮）
- 元記事との対応表：[トップのREADME](../README.md#month-4--フェーズ4ros-2シミュレーション企業と同じ作り方第1317週)
- 作業場所：[hiraku00/ros2_ws](https://github.com/hiraku00/ros2_ws)（コードはそちらに置き、ここには計画と記録のリンクを置く）
- 状態：一部先行。始める前に日本語の教材を確認して、日別の CHECKLIST.md を作る

## 元記事の目標

ROS 2（ロボットのソフトを小さなプログラムに分けてつなぐ仕組み）でロボットを作り、シミュレーションで部屋の地図を作って、自律走行させること。

元記事は「この月は実機なし、普通のノートPC、NVIDIA の GPU なしで全部できる」と書いています。実機がない影響が一番小さいフェーズです。

## ros2_ws ですでにやったこと

| 元記事の内容 | ros2_ws でやったこと |
| --- | --- |
| Jazzy を入れる | Mac の Docker で ros:jazzy を使っている |
| ノードとトピック | talker・listener、sim_robot と brain のやりとり |
| パラメータ | brain の slow_distance・turn_distance・hysteresis を実行中に変更 |
| colcon のワークスペース | my_first_pkg、room_robot_pkg をビルドして実行 |
| シミュレーション | 自作の2D の部屋シミュレータ（room_sim）。`/scan`（LiDAR の代わり）と `/cmd_vel`（走行指令）を使う |
| ナビゲーションの考え方 | 障害物をよける頭脳（avoider）。Nav2 の一番簡単な形 |

## 週の計画（仮）

| 週 | やること | 成果物 |
| --- | --- | --- |
| 第13週 | サービス（頼むと1回返事が返る）、アクション（途中経過を返す長い仕事）、独自の .msg と .srv、launch ファイル（まとめて起動）、ros2 bag（記録と再生） | 元記事の課題：センサー役・処理役・設定サービス役・集計役の4ノードを launch でつなぎ、ros2 bag で記録・再生する |
| 第14週 | URDF と xacro（ロボットの形を書く）、TF（部品同士の位置関係）、RViz（3D 表示） | 自分のロボット（2輪の台車＋センサーの柱＋首振りの頭）を RViz で表示したスクリーンショット |
| 第15週 | Gazebo Harmonic（ROS 2 とつながる物理シミュレータ）。LiDAR とカメラを付け、障害物のある世界（SDF）を作る | センサーのデータが ROS 2 のトピックに出て、RViz に映る |
| 第16週 | ros2_control と diff_drive_controller（左右の車輪の速さの差で曲がる台車の制御） | キーボードで動かせる台車と、指定した距離を進むアクションサーバー（途中経過と取り消しつき） |
| 第17週 | SLAM Toolbox（走りながら地図を作る）と Nav2（自律移動） | 自分で作った地図の中を、目的地まで自律走行する画面録画 |

## 元記事の教材（英語）

- [ROS 2 Jazzy 公式チュートリアル](https://docs.ros.org/en/jazzy/Tutorials.html)
- [Articulated Robotics](https://articulatedrobotics.xyz/tutorials/)（URDF からシミュレーション、ros2_control、SLAM まで一続き）
- [MOGI-ROS](https://github.com/orgs/MOGI-ROS/repositories)（Jazzy と Gazebo Harmonic の大学の授業一式）
- [Automatic Addison](https://automaticaddison.com/tutorials/)
- [Gazebo ドキュメント](https://gazebosim.org/docs/latest/getstarted/)
- [ros2_control ドキュメント](https://control.ros.org/rolling/index.html)
- [Nav2 Getting Started](https://docs.nav2.org/rolling/getting_started/index.html)、[Nav2 Tutorials](https://docs.nav2.org/rolling/tutorials/)
- [SLAM Toolbox](https://github.com/SteveMacenski/slam_toolbox)

元記事の注意：`catkin_make`、`roscore`、`rosrun`、`rospy` が出てくる記事は終了済みの ROS 1 向けなので閉じる。`ign gazebo` や `roslaunch gazebo_ros` が出てくるのは古い Gazebo の記事。

## 到達目標（元記事の Month 4 Milestone）

- [ ] Python と C++ の両方で、トピック・サービス・アクションを使う ROS 2 ノードを書ける（今は Python のみ）
- [ ] 自分のロボットを、正しいフレーム・慣性・当たり判定つきで xacro に書ける
- [ ] そのロボットを Gazebo で、LiDAR とカメラが動く状態でシミュレーションできる
- [ ] ros2_control を設定し、生の指令ではなくコントローラ経由でロボットを動かせる
- [ ] SLAM Toolbox で地図を作り、Nav2 で自律走行できる
- [ ] 壊れた TF ツリー（部品同士の位置関係の不整合）を診断できる

## 始める前に確かめること

- Mac の Docker の中で動かす Gazebo と RViz の画面を、どうやって Mac に表示するか（VNC などの方法を試す必要がある）
- 日本語の ROS 2 教材（書籍や記事）で、Jazzy 向けのものがあるか
