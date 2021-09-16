/**
*@file A2.h
* @author Suhas kn
* @brief Header file for activity1
* @version 0.1
* @date 2021-04-27
*/

#ifndef A2_H_INCLUDED
#define A2_H_INCLUDED

#include <util/delay.h>
#include <avr/io.h>


void InitADC();


uint16_t ReadADC(uint8_t ch);


uint16_t activity2_GetADC(void);

#endif

