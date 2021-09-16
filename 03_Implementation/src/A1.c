/**
*@file A1.c
* @author Suhas kn
* @brief Header file for activity1
* @version 0.1
* @date 2021-04-27
*/

#include<avr/io.h>
#include <util/delay.h>
#include"A1.h"

void A1()
{
    DDRD &= ~(1<<PD1); //input pin Port D pin 1
    DDRD &= ~(1<<PD2);  //input pin Port D pin 2

    //Giving logic HIGH for the input pins//
    PORTD |= (1<<PD1);
    PORTD |= (1<<PD2);

    /*Giving the output @ pin0 Port B */
    DDRB |= (1<<PB0);

    if  ( (!(PIND & (1<<PD1))) & (!(PIND & (1<<PD2))) )
    {
        PORTB |= (1<<PB0);   //Turns on the LED if both the switches are turned on by the user
        _delay_ms(1000);
    }
    else
    {
       PORTB &= ~(1<<PB0);  //Turns Off the LED
        _delay_ms(1000);
    }
}

