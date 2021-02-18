/*
 * File:   contatos_init.c
 * Author: 19179166
 *
 * Created on 18 de Fevereiro de 2021, 15:09
 */


#include <xc.h>
#include "config.h"
#define K1  PORTDbits.RD7
#define K2  PORTDbits.RD6
#define K3  PORTDbits.RD5


void contatos_init (void)
{
    
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    K3 = 0;
    K2 = 0;
    K1 = 0;
}

void k1 (int x)
{
    K1 = x;
    
}

void k2 (int x)
{
    K2 = x;
}

void k3 (int x)
{
    K3 = x;
}

int k1status (void)
{
  return(K1);  
}