#include <stdio.h>
#include "main.h"



int tarifa1F(int consumo)
{     
    float consumo_basico = 0;
    float consumo_Ibasico = 0;
    float consumo_Ialto = 0;
    float consumo_Excedente = 0;

    if (consumo >= 0 && consumo <= 300)
    {
        consumo_basico = 0.786 * consumo;
        printf("Consumo basico \n");   
    }
     if (consumo >= 301 && consumo <= 1200)
    {
        consumo_basico = 175 * .786;
        consumo_Ibasico = (consumo - 175) * 0.911;
        printf("Consumo I.bajo \n");           
    }
    if (consumo >= 1201 && consumo <= 2500)
    {
        consumo_basico = 175 * .786;
        consumo_Ibasico = (400-175) * .911;
        consumo_Ialto = (consumo - 400) * 1.177;
        printf("Consumo I.alto \n");      

    }
     if (consumo >= 2501)
    {
        consumo_basico = 175 * .786; 
        consumo_Ibasico = (400-175) * .911;
        consumo_Ialto = (600-400) * 1.177; 
        consumo_Excedente = (consumo - 600) * 3.134;

        printf("Consumo excedente \n");    
    }
    printf("Cobro por consumo basico: %.2f\n",consumo_basico);
    printf("Cobro por consumo I. bajo: %.2f\n",consumo_Ibasico);
    printf("Cobro por consumo I. alto: %.2f\n",consumo_Ialto);
    printf("Cobro por consumo excedente: %.2f\n",consumo_Excedente);
    return (consumo_Excedente + consumo_Ialto + consumo_Ibasico + consumo_basico);

}

