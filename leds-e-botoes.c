#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

#include "leds-e-botoes.h"

// Inicializa os LEDs
void leds_init(void) {
    gpio_init(LED1_PIN);
    gpio_set_dir(LED1_PIN, true); // true = saída

    gpio_init(LED2_PIN);
    gpio_set_dir(LED2_PIN, true);
}

// Inicializa os botões
void botoes_init(void) {
    gpio_init(BUTTON1_PIN);
    gpio_set_dir(BUTTON1_PIN, false); // false = entrada
    gpio_pull_up(BUTTON1_PIN);        // ativa pull-up interno

    gpio_init(BUTTON2_PIN);
    gpio_set_dir(BUTTON2_PIN, false);
    gpio_pull_up(BUTTON2_PIN);
}

// Controle de LEDs
void led1_on(void)  { gpio_put(LED1_PIN, 1); }
void led1_off(void) { gpio_put(LED1_PIN, 0); }
void led2_on(void)  { gpio_put(LED2_PIN, 1); }
void led2_off(void) { gpio_put(LED2_PIN, 0); }

// Leitura dos botões (considerando pull-up)
bool button1_pressed(void) { return !gpio_get(BUTTON1_PIN); } // ativo-baixo
bool button2_pressed(void) { return !gpio_get(BUTTON2_PIN); }



