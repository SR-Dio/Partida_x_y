/*
 * File:   delay.c
 * Author: 19179166
 *
 * Created on 18 de Fevereiro de 2021, 15:43
 */


#include <xc.h>
#include "config.h"

void delay (unsigned int t) 
{
    while(t)
    {
        __delay_ms(1);
        --t;
    }
}