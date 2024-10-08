#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led1(LED_PIN, LED_ACT);
LED led2(16, LED_ACT);
LED *currentLED = &led1;  // LED đang được điều khiển, mặc định là LED1

void btnPush();
void btnDoubleClick();
void btnLongPress();
OneButton button(17, !BTN_ACT);

void setup()
{
    led1.off();
    led2.off();
    button.attachClick(btnPush);            // Single click để bật/tắt LED
    button.attachDoubleClick(btnDoubleClick); // Double click để chuyển chế độ điều khiển giữa 2 LED
    button.attachLongPressStart(btnLongPress); // Giữ nút để nhấp nháy LED
}

void loop()
{
    led1.loop();
    led2.loop();
    button.tick();
}

void btnPush()
{
    currentLED->flip(); // Bật/tắt LED hiện tại
}

void btnDoubleClick()
{
    // Chuyển chế độ điều khiển giữa LED1 và LED2
    if (currentLED == &led1)
        currentLED = &led2;
    else
        currentLED = &led1;
}

void btnLongPress()
{
    currentLED->blink(200); // Nhấp nháy LED hiện tại với chu kỳ 200ms
}
