#include <avr/io.h>
#include <util/delay.h>

int main(void) {

    // set PORTB5 as a output
    DDRB = DDRB | (1 << DDB5);

    while(1) 
    {
        // set PORTB5
        PORTB = PORTB | (1 << PORTB5);

        // wait
        _delay_ms(100);

        // unset PORTB5
        PORTB = PORTB & ~(1 << PORTB5);

        // wait some more
        _delay_ms(100);
    }
}