# 反応時間ゲーム（6.5 の再現と改造）

34日目の課題です。3つのボタンと2つの LED で、「LED が光ってから、正しいボタンを押すまで」の時間を測ります。記録は [week5/README.md の34日目](../README.md#34日目-反応時間ゲーム筆者の課題) にあります。

| フォルダ・ファイル | 内容 | Tinkercad |
| --- | --- | --- |
| [v1_original/](v1_original/v1_original.ino) | 6.5 の記事のコード（`pressed2()` の `flag = -1;` を足したもの） | [6.5 の再現](https://www.tinkercad.com/things/bj7daUqK43E-day34-165-/editel?sharecode=O2zO1AmksBrX0P8MQ77n3fg1S_0J0heNItrDkaTrgWs) |
| [v2_debounce/](v2_debounce/v2_debounce.ino) | 改造①：割り込みにデバウンス（50ミリ秒）を入れた | [6.5.2 改造](https://www.tinkercad.com/things/9lz2gOFuzsL-day34-1652-/editel?sharecode=2idQtKxreQl1NoDQGAZUZe-Fyjtvp9DdDfULUTX28gA) |
| [debounce_test/](debounce_test/debounce_test.ino) | デバウンスが働くかを、チャタリングの「まね」で確かめるテスト（配線なし） | [6.5.3 bounce](https://www.tinkercad.com/things/h1PVp4JrsXb-day34-1653-bounce/editel?sharecode=0o7Ex6Z1t8qCjteTqXBhFPTMtc9rwzLORYfkAHSSxT4) |
| [v3_flying/](v3_flying/v3_flying.ino) | 改造②：`delay()` をやめて `millis()` で待つ。待っている間に押したら `Flying!` | [6.5.4 フライング](https://www.tinkercad.com/things/aliItwcjMtU/editel?sharecode=04JXegW1PF3U-WnAMaiPnC6MhZ43vWV5eMwIamqxhtA) |
| [demo.mp4](demo.mp4) | `v3_flying` が動いているところの画面録画（21秒） | — |

## 回路

| 部品 | つなぎ先 |
| --- | --- |
| ボタン1 | ピン2（割り込み）。10kΩ で 5V に引き上げ、押すと GND |
| ボタン2 | ピン3（割り込み）。同じ形 |
| リセットのボタン | ピン9。同じ形 |
| 緑の LED | ピン6 → 220Ω → LED → GND（ボタン1が正解） |
| 赤の LED | ピン7 → 220Ω → LED → GND（ボタン2が正解） |

## 遊び方

1. リセットのボタンを押す（`Waiting...`）
2. 2〜5秒待つ。**光る前に押すと、`Flying!`**（`v3_flying` のみ）
3. 緑か赤が光る（`Light!`）。**緑ならボタン1、赤ならボタン2**を、できるだけ早く押す
4. `Correct! Your reaction time is : … ms`。ちがうボタンなら `Wrong Click!`

## 動画について

画面録画のうち、Tinkercad の部分だけを切り出し、音声は消してあります（録画にブラウザのタブやブックマークが写っていたため）。元の動画は、このリポジトリには置いていません。
