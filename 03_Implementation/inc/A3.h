/**
*@file A3.h
* @author Suhas kn
* @brief Header file for activity1
* @version 0.1
* @date 2021-04-27
*/

#ifndef A3_H_INCLUDED
#define A3_H_INCLUDED


#define PWM_20_PERCENT (205) /**< Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< Output PWM for 95% duty cycle */


#include <util/delay.h>
#include <avr/io.h>


void InitTimer();


void activity3_PWM(uint16_t temp);

#endif


