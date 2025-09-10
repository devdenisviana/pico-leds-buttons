#include "pico/stdlib.h"
#include "leds-e-botoes.h"

int main() {
    stdio_init_all();    // inicializa UART (opcional para debug)
    leds_init();
    botoes_init();

    while (true) {
        bool b1 = button1_pressed();
        bool b2 = button2_pressed();

        if  (b1) {
            led1_on();
            led2_off();
        } else if (b2) {
            led1_off();
            led2_on();
        } else {
            // Nenhum pressionado
            led1_off();
            led2_off();
        }

        sleep_ms(50); // debounce simples
    }
}
