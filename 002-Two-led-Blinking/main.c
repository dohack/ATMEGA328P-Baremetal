#include "blink.h"


#define LED1_PIN PB0
#define LED2_PIN PB1

int main(void)
{
    // Initialize LEDs
    DDRB |= (1 << LED1_PIN) | (1 << LED2_PIN);

    // Blink LED1 and LED2
    while (1)
    {
        ledToggle(LED1_PIN, 1000);  // Blink LED1 with 1-second interval
        ledToggle(LED2_PIN, 500);   // Blink LED2 with 0.5-second interval
    }

    return 0; // Although this line will never be reached
}
