#ifndef BLINK_H
#define BLINK_H

#include <avr/io.h>
#include <util/delay.h>

void delay_ms(uint16_t delay_ms);
void ledToggle(uint8_t pin_no, uint16_t delay_ms);

#endif // BLINK_H
