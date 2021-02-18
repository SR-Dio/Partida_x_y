/*
 * File:   main.c
 * Author: 19179166
 *
 * Created on 18 de Fevereiro de 2021, 15:08
 */


#include <xc.h>
#include "config.h"
#include "contatos_init.h"
#include "botoes_init.h"
#include "delay.h" 

void main(void) 
{
    
    int estado = 0;
    int t;
    
    while(1)
    {
        switch (estado)
        {
            case 0:
                        estado = 1;
                    break;
            case 1:
                        botoes_init();
                        contatos_init();
                        estado = 2;
                    break;
            case 2:
                        if(botao_liga()==1 && k1status() == 0)
                        estado = 3;
                    break;
            case 3:
                        k1(1);
                        k2(1);
                        k3(0);
                        estado = 4;
            case 4:
                        t = 3000;
                        estado = 5;
                    break;
            case 5:  
                        delay(1);
                        --t;
                        if(t <=0)
                        estado = 6;
                    break;
            case 6:
                        k1(1);
                        k2(0);
                        k3(1);
                        if(botao_desliga()== 1)
                        estado = 7;
                    break;    
            case 7:
                        k1(0);
                        k2(0);
                        k3(0);
                        estado = 2;
                    break;    
                    
        }
    }
}
