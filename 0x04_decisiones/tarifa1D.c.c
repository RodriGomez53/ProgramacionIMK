#include <stdio.h>

int main()
{
    float kWSobreHora = 0, CostoTotal = 0, CB = 137.55, CIB = 204.975, CIA = 235.4, CE = 0;

    printf("Ingrese el consumo de KW/hora\n");
    scanf("%f", &kWSobreHora);
    if (kWSobreHora <= 175)
    {
        CB = kWSobreHora * 0.786;
        CostoTotal = kWSobreHora * 0.786;
        printf("Consumo Bajo --> %f\n", CB);
        printf("El total a pagar es: ");
        printf("%f\n", CostoTotal);
    }
    else if (kWSobreHora <= 400)
    {
        CIB = (kWSobreHora - 175) * 0.911;
        CostoTotal = CIB + CB;
        printf("Consumo Bajo --> %f\n", CB);
        printf("Consumo Intermedio Bajo --> %f\n", CIB);
        printf("El total a pagar es: ");
        printf("%f\n", CostoTotal);
    }
    else if (kWSobreHora <= 600)
    {
        CIA = ((kWSobreHora - 400) * 1.177);
        CostoTotal = CIA + CB + CIB;

        printf("Consumo Bajo --> %f\n", CB);
        printf("Consumo Intermedio Bajo --> %f\n", CIB);
        printf("Consumo Intermedio Alto --> %f\n", CIA);
        printf("El total a pagar es: ");
        printf("%f\n", CostoTotal);
    }
    else
    {
        CE = ((kWSobreHora - 600) * 3.134);
        CostoTotal = CE + CB + CIB + CIA;
        printf("Consumo Bajo --> %f\n", CB);
        printf("Consumo Intermedio Bajo --> %f\n", CIB);
        printf("Consumo Intermedio Alto --> %f\n", CIA);
        printf("Consumo excedente --> %f\n", CE);
        printf("El total a pagar es: ");
        printf("%f\n", CostoTotal);
    }
}
