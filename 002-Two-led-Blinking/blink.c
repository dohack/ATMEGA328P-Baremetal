#include "blink.h"


 
void delay_ms(uint16_t delay_ms) {
    while (delay_ms--) {
        // Approximate 1ms delay loop
        for (uint16_t i = 0; i < 1000; i++) {
            _nop(); // No operation, just a placeholder
        }
    }
}

void ledToggle(uint8_t pin_no, uint16_t delay_ms)
{
    // Ensure the pin is configured as an output
    DDRB |= (1 << pin_no);

    // Toggle the LED indefinitely
    while (1)
    {
        PORTB |= (1 << pin_no);   // Turn the LED on
        delay_ms(delay_ms);       // Wait for the specified delay

        PORTB &= ~(1 << pin_no);  // Turn the LED off
        delay_ms(delay_ms); ;      // Wait for the specified delay
    }
}
