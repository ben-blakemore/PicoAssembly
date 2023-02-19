#include "pico/stdlib.h"

#define GPIO_ON 1
#define GPIO_OFF 0

#define LED_PIN 25

int main() {

    // Initialize LED pin
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Loop forever
    while (true) {

        // Blink LED
        printf("Blinking!\r\n");
        gpio_put(LED_PIN, true);
        sleep_ms(1000);
        gpio_put(LED_PIN, false);
        sleep_ms(1000);
    }
}
