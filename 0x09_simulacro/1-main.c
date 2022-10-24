#include <stdio.h>
int main()
{
    int litros=0, millas=0;
    float galones=0, millasXGalon=0;
        while (1==1)
    {
        printf("Inserte los litros de gasolina consumidos\n");
        scanf("%d", &litros);
        galones = litros * 0.264179;
        printf("Inserte las millas recorridas\n");
        scanf("%d", &millas);
        millasXGalon = millas / galones;
        printf("El automovil da %f millas por galon\n", millasXGalon);
    }
    
}
