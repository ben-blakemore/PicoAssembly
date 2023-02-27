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
        if (strcmp(buffer, "ON") == 0) {
            gpio_put(led_pin, true);
        } else if (strcmp(buffer, "OFF") == 0) {
            gpio_put(led_pin, false);
        }
    }
}
