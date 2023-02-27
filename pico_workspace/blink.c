#include <stdio.h>
#include "pico/stdlib.h"

int main() {

    const uint led_pin = 25;

    // Initialize LED pin
    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);
    gpio_put(led_pin, true);

    stdio_init_all();

    char buffer[1024];

    while(1) {
        scanf("%1024s", buffer);
        printf("%s\n", buffer);
        gpio_put(led_pin, false);
        sleep_ms(500);
        gpio_put(led_pin, true);
        sleep_ms(500);
    }
}
