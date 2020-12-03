/*
 * project2.c
 *
 * Created: 2020-11-12 오후 4:06:11
 * Author : dezso
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <avr/interrupt.h>
#include <util/delay.h>
ISR(INT0_vect)
{
	OCR1A=375;
}



int main(void)
{
	DDRB=0xff;
	TCCR1A=0x82;
	TCCR1B=0x1b;
	ICR1=1249;
	EICRA=0x02;
	EIMSK=0x01;
	sei();
    /* Replace with your application code */
    while (1) 
    {
		OCR1A=150;
    }
}

