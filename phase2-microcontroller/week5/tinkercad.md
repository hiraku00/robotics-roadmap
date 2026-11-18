# 第5週 Tinkercad の回路

回路ごとに、共有リンクとスクリーンショットを1組ずつ残します。共有リンクは、Tinkercad の右上の「送信先」から取得します。コードは [code/](code/) に置きます。

| 日 | 回路 | 共有リンク | スクリーンショット | コード |
| --- | --- | --- | --- | --- |
| 29 | LED の点滅。Arduino UNO のピン9 → 220Ω → LED → GND | [Tinkercad で開く](https://www.tinkercad.com/things/5flwTfr1yzf-day29-led1hello-led/editel?sharecode=eR5hTdCiV8DzIhYwy75Y2APvANFsT_QDWI57_efGms4) | `images/day29-led-on.png`、`images/day29-wiring-closeup.png`、`images/day29-mistake-pin13-L-blinks.png` | [day29_blink.ino](code/day29_blink/day29_blink.ino) |
| 29 | シリアルモニタ。Arduino UNO だけ（配線なし） | | `images/day29-serial-monitor.png`、`images/day29-serial-board.png` | [day29_serial.ino](code/day29_serial/day29_serial.ino) |
| 30 | 3.1 ボタンの値を読む。5V → ボタン → ピン2、ピン2 → 10kΩ → GND（プルダウン） | [Tinkercad で開く](https://www.tinkercad.com/things/dz8KeFOmEUI-day30-131-/editel?sharecode=DgwOkS_hnWZBoAcr2fk0u4QKZ9e6jSi56eZT1PgqSRI) | `images/day30-31-*.png` | [day30_button.ino](code/day30_button/day30_button.ino) |
| 30 | 5.3 ステート変更の検出。3.1 の回路 ＋ ピン9 → 220Ω → LED → GND（モーターの代わり） | | `images/day30-53-*.png` | [day30_state_change.ino](code/day30_state_change/day30_state_change.ino) |
| 31 | 2.1 フェージング。ピン `~9` → 220Ω → LED → GND（29日目と同じ） | | `images/day31-21-*.png` | [day31_fading.ino](code/day31_fading/day31_fading.ino)、[day31_analogwrite_128.ino](code/day31_analogwrite_128/day31_analogwrite_128.ino) |
| 31 | 4.1 ノブを回す。可変抵抗器（250kΩ）の片端 → 5V、片端 → GND、真ん中 → A0 | | `images/day31-41-*.png` | [day31_knob_serial.ino](code/day31_knob_serial/day31_knob_serial.ino) |
| 31 | 5.6 マッピング（サーボ版）。4.1 の回路 ＋ サーボ（信号 → ピン9、電源の列を 5V と GND につなぐ） | | `images/day31-56-*.png` | [day31_servo_map.ino](code/day31_servo_map/day31_servo_map.ino) |
