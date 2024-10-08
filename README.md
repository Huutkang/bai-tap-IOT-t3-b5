# Dự Án Điều Khiển LED

## Mô Tả Dự Án
Dự án này điều khiển hai LED (LED1 và LED2) thông qua một nút nhấn, với các chế độ điều khiển sau:
- Single click: Bật hoặc tắt LED hiện tại.
- Double click: Chuyển giữa chế độ điều khiển LED1 hoặc LED2.
- Long press: Làm cho LED đang được điều khiển nhấp nháy với chu kỳ 200ms.

## Cấu Trúc Dự Án
- `main.cpp`: Chứa mã nguồn chính điều khiển hành vi của hai LED.
- `LED.h`: Định nghĩa class `LED`, với các phương thức bật, tắt, nhấp nháy, và cập nhật trạng thái LED.

## Sử Dụng
- Kết nối 2 LED vào các chân phù hợp với thiết lập trong code (`LED_PIN`, chân số 16).
- Kết nối nút nhấn vào chân số 17 (hoặc tùy chỉnh theo thiết lập `BTN_PIN`).
- Nạp code lên board và điều khiển theo các chế độ đã nêu.

## Yêu Cầu Phần Cứng
- ESP32.
- 2 LED.
- 1 nút nhấn.
