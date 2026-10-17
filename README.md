# robotics-month1-2

[@DeRonin_「How to become a Robotics Engineer in 6 months」](https://x.com/DeRonin_/status/2095180126359105955) のMonth 1（電子回路）とMonth 2（マイコン）を、**実機なし・シミュレータだけ**で8週間かけて進める学習記録です。

- 日別のやること：[CHECKLIST.md](CHECKLIST.md)
- ROS 2側の演習（第8週で合流）：[hiraku00/ros2_ws](https://github.com/hiraku00/ros2_ws)

## 進捗

| 週 | テーマ | 日 | 状態 |
| --- | --- | --- | --- |
| [第1週](week1/) | オームの法則・直列並列・電力 | 1〜7 | 未着手 |
| [第2週](week2/) | 分圧・回路図・コンデンサ | 8〜14 | 未着手 |
| [第3週](week3/) | ダイオード・トランジスタ・プルアップ・電池の内部抵抗 | 15〜21 | 未着手 |
| [第4週](week4/) | 故障診断・統合課題・はんだ付けの座学 | 22〜28 | 未着手 |
| [第5週](week5/) | Arduinoの基本 | 29〜35 | 未着手 |
| [第6週](week6/) | モーター | 36〜42 | 未着手 |
| [第7週](week7/) | センサーとフィルタ | 43〜49 | 未着手 |
| [第8週](week8/) | ESP32・PID制御・ros2_wsとの合流 | 50〜56 | 未着手 |

状態は「未着手 / 進行中 / 完了」で更新します。

## 使う道具

すべて無料で、ブラウザかMacで動きます。

- [Tinkercad Circuits](https://www.tinkercad.com/circuits)：ブレッドボード・Arduino UNO・仮想テスター
- [Falstad CircuitJS](https://www.falstad.com/circuit/)：電流の流れをアニメーションで見る
- [Wokwi](https://wokwi.com/)：ESP32・MPU6050・A4988など
- [KiCad](https://www.kicad.org/)：回路図
- Python + matplotlib：フィルタや制御のシミュレーション

## 進め方のルール

1. その日の項目が終わったら、CHECKLIST.md の `- [ ]` を `- [x]` にしてコミットする。コミットメッセージは `day03: 直列回路` のように日番号から始める。
2. 測定や実験は、**やる前に予想を書く**。各週の README の「予想 → 結果 → 差の理由」表に残す。
3. 週の終わりに、各週の README の「何が壊れてどう直したか」を必ず埋める。うまくいった記録より、こちらのほうが価値があります。
4. 詰まったら次の日に進まず、その日をやり直す。土曜日は取り戻し用。

## ファイルの置き方

| 種類 | 置くもの | 場所 |
| --- | --- | --- |
| Tinkercad | 共有リンクとスクリーンショット。コードは `.ino` にコピー | `weekN/tinkercad.md`、`weekN/images/` |
| Wokwi | プロジェクトのリンク。`sketch.ino` と `diagram.json` をダウンロードして置く | `weekN/<課題名>/` |
| KiCad | プロジェクトフォルダ一式と、書き出した回路図PDF | `weekN/kicad/` |
| Python | コードと、出力したグラフの画像 | `weekN/python/` |
| 計算ドリル | 間違えた問題の写真だけ（全部は置かない） | `weekN/calc/` |
| 動画 | 大きいので置かない。YouTubeの限定公開などにしてリンクだけ書く | 各週の README |

Tinkercadの共有リンクは、回路の「共有」から「リンクを知っている人は誰でも表示可能」にして取得します。

## リポジトリの構成

```
robotics-month1-2/
├── README.md          このファイル
├── CHECKLIST.md       56日分のチェックリスト
├── week1/             README.md / tinkercad.md / calc/
├── week2/             README.md / kicad/
├── week3/             README.md / kicad/
├── week4/             README.md / kicad/
├── week5/             README.md / reaction_game/
├── week6/             README.md / encoder/
├── week7/             README.md / python/
└── week8/             README.md / python/ / brain_port/
```

## 実機を買ったらやり直すこと

シミュレータでは確かめられなかったものを、ここに貯めていきます。

- [ ] はんだ付けの実技（第4週の座学メモを見ながら）
- [ ] 本物のテスターで、第1週の測定を取り直す
- [ ] 突入電流・ブラウンアウトを実際に起こして測る（第3週）
- [ ] ESP32でWebページを配信してスマホから操作する（第8週で保留）
- [ ] 第8週の移植した頭脳を実機で動かし、シミュレーションとの差を記録する
