#ifndef LEDS_E_BOTOES_H
#define LEDS_E_BOTOES_H

#include "pico/stdlib.h"

// LEDs
#define LED1_PIN 13
#define LED2_PIN 12

// Botões
#define BUTTON1_PIN 5
#define BUTTON2_PIN 6

// Inicializações
void leds_init(void);
void botoes_init(void);

// Controle de LEDs
void led1_on(void);
void led1_off(void);
void led2_on(void);
void led2_off(void);

// Leitura dos botões
bool button1_pressed(void);
bool button2_pressed(void);

#endif // LEDS_E_BOTOES_H
