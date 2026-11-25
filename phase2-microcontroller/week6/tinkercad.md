# 第6週 Tinkercad の回路

回路ごとに、共有リンクとスクリーンショットを1組ずつ残します。共有リンクは、Tinkercad の右上の「送信先」から取得します。コードは [code/](code/) に置きます。

| 日 | 回路 | 共有リンク | スクリーンショット | コード |
| --- | --- | --- | --- | --- |
| 36 | トランジスタでモーターを回す。ピン2 → 625Ω → NPN のベース、電池（3V）の＋ → モーター → コレクタ、エミッタ → GND（電池の − と共通） | [Tinkercad で開く](https://www.tinkercad.com/things/bElgNR5a03V/editel?sharecode=3llx37DVYVxHKrDh22HQ04LUa980ReYHMZt6rfURszk) | `images/day36-*.png`、`images/day36-*.webp` | [day36_motor_transistor.ino](code/day36_motor_transistor/day36_motor_transistor.ino) |
| 37 | トランジスタでモーターを回し、ダイオードを並列に足して PWM で5段階。ピン3 → 680Ω → NPN のベース、電池（3V）の＋ → モーター → コレクタ、エミッタ → GND、ダイオード（縞＝電池の＋側）をモーターの両端に並列 | [Tinkercad で開く](https://www.tinkercad.com/things/5ySBgtFCXLX/editel?sharecode=16pri83mmRJ1OLx_keiX46KELVHmahRGNM1C4_DwSHk) | `images/day37-*.png`、`images/day37-*.webp` | [steps](code/day37_motor_pwm_steps/day37_motor_pwm_steps.ino)、[log](code/day37_motor_pwm_log/day37_motor_pwm_log.ino)、[serial](code/day37_motor_pwm_serial/day37_motor_pwm_serial.ino) |
