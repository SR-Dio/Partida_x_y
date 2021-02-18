/*
 * File:   botoes_init.c
 * Author: 19179166
 *
 * Created on 18 de Fevereiro de 2021, 15:22
 */


#include <xc.h>
#include "config.h"
#include "botoes_init.h"

#define   BOTAO_DESLIGA PORTDbits.RD0
#define   BOTAO_LIGA    PORTDbits.RD1

void botoes_init (void) 
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
    
}

int botao_liga (void)
{
    return(BOTAO_LIGA);
}

int botao_desliga (void)
{
    return(BOTAO_DESLIGA);
}