#include <stdio.h>
#include "main.h"

int tarifa1B(int consumo)
{     
    float consumo_basico = 0;
    float consumo_Ibasico = 0;
    float consumo_Ialto = 0;
    float consumo_Excedente = 0;

    if (consumo >= 0 && consumo <= 125)
    {
        consumo_basico = 0.786 * consumo;
        printf("Consumo basico \n");   
    }
     if (consumo >= 126 && consumo <= 225)
    {
        consumo_basico = 175 * .786;
        consumo_Ibasico = (consumo - 100) * 0.911;
        printf("Consumo I.bajo \n");           
    }
     if (consumo >= 226)
    {
        consumo_basico = 175 * .786; 
        consumo_Ibasico = (150-100) * .911; 
        consumo_Excedente = (consumo - 150) * 3.134;

        printf("Consumo excedente \n");    
    }
    printf("Cobro por consumo basico: %.2f\n",consumo_basico);
    printf("Cobro por consumo I. bajo: %.2f\n",consumo_Ibasico);
    printf("Cobro por consumo I. alto: %.2f\n",consumo_Ialto);
    printf("Cobro por consumo excedente: %.2f\n",consumo_Excedente);
    return (consumo_Excedente + consumo_Ialto + consumo_Ibasico + consumo_basico);

}
