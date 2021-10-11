#define LED_GREEN   PB5 // AVR pin where green LED is connected
#define DELAY_BETWEEN 2000 
#define SHORT_DELAY 300 // Delay in milliseconds
#define LONG_DELAY 900
#ifndef F_CPU           // Preprocessor directive allows for conditional
                        // compilation. The #ifndef means "if not defined".
# define F_CPU 16000000 // CPU frequency in Hz required for delay
#endif                  // The #ifndef directive must be closed by #endif

#include <util/delay.h> // Functions for busy-wait delay loops
#include <avr/io.h>     // AVR device-specific IO definitions

int main(void)
{
    // Set pin as output in Data Direction Register
    // DDRB = DDRB or 0010 0000
    DDRB = DDRB | (1<<LED_GREEN);

    // Set pin LOW in Data Register (LED off)
    // PORTB = PORTB and 1101 1111
    PORTB = PORTB & ~(1<<LED_GREEN);

    // Infinite loop
    while (1)
    {
        // Pause several milliseconds
        _delay_ms(DELAY_BETWEEN);

		// the letter "B" in morse code ( _ . . . )
        PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(LONG_DELAY);
	PORTB = PORTB & ~(1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
	PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
      	PORTB = PORTB & ~(1<<LED_GREEN);
      	_delay_ms(SHORT_DELAY);
	PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
      	PORTB = PORTB & ~(1<<LED_GREEN);
      	_delay_ms(SHORT_DELAY);
	PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
      	PORTB = PORTB & ~(1<<LED_GREEN);
	_delay_ms(DELAY_BETWEEN);
		// the letter "P" in morse code ( . _ _ . )
	PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
      	PORTB = PORTB & ~(1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
	PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(LONG_DELAY);
	PORTB = PORTB & ~(1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
	PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(LONG_DELAY);
	PORTB = PORTB & ~(1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
	PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
      	PORTB = PORTB & ~(1<<LED_GREEN);
	_delay_ms(DELAY_BETWEEN);
		//the letter "A" in morse code ( . _ )
	PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
      	PORTB = PORTB & ~(1<<LED_GREEN);
	_delay_ms(SHORT_DELAY);
	PORTB = PORTB ^ (1<<LED_GREEN);
	_delay_ms(LONG_DELAY);
	PORTB = PORTB & ~(1<<LED_GREEN);
	_delay_ms(DELAY_BETWEEN);
    }
	// Will never reach this
    return 0;
}
