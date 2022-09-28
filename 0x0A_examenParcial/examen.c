#include <stdio.h>
#include <math.h>
#include "main.h"

int main()
{

    int Opcion_Producto, Volumen=0;
    float Radio_Tapa=0, Area_Total=0, Costo_Fabricacion=0, Costo_Anterior=0, Ahorro=0, Densidad=0, ml_Gramos=0;
    printf("Inserte el tipo de producto\n");
    printf("1 - Aceite \n");
    printf("2 - Alcohol \n");
    printf("3 - Gasolina \n");
    printf("4 - Acetona \n");
    scanf("%d",&Opcion_Producto);
    printf("Inserte el volumen a envasar\n");
    scanf("%d",&Volumen);

switch (Volumen)
{case 500:
Costo_Anterior = 1.006;
    break;
case 1000:
Costo_Anterior = 1.6816;
break;
case 1500:
Costo_Anterior = 1.9610;
break; 
default:
Costo_Anterior = 3.1038;
    break;
}
    switch (Opcion_Producto)
    {case 1:
    Densidad = 0.9;
        Radio_Tapa = pow((2 * Volumen)/12.56636,(0.3333));
        Area_Total = (2*3.14159*pow(Radio_Tapa, 2)) + (2*3.14159*Radio_Tapa*(Volumen/(3.14159*pow(Radio_Tapa, 2))));
        Costo_Fabricacion = Area_Total*0.00245;
        Ahorro = Costo_Anterior - Costo_Fabricacion;
        ml_Gramos = Volumen * Densidad;
        printf("Radio de la tapa: %.2f\n", Radio_Tapa);
        printf("Area total de la lata: %.2f\n", Area_Total);
        printf("Costo de fabricacion: %.2f\n", Costo_Fabricacion);
        printf("Costo anterior para lata: %.2f\n", Costo_Anterior);
        printf("Ahorro: %.2f\n", Ahorro);
        printf("ml a gramos: %.2f\n", ml_Gramos);
        break;
    break;
    case 2:
        Densidad = 0.8;
        Radio_Tapa = pow((2 * Volumen)/12.56636,(0.3333));
        Area_Total = (2*3.14159*pow(Radio_Tapa, 2)) + (2*3.14159*Radio_Tapa*(Volumen/(3.14159*pow(Radio_Tapa, 2))));
        Costo_Fabricacion = Area_Total*0.00245;
        Ahorro = Costo_Anterior - Costo_Fabricacion;
        ml_Gramos = Volumen * Densidad;
        printf("Radio de la tapa: %.2f\n", Radio_Tapa);
        printf("Area total de la lata: %.2f\n", Area_Total);
        printf("Costo de fabricacion: %.2f\n", Costo_Fabricacion);
        printf("Costo anterior para lata: %.2f\n", Costo_Anterior);
        printf("Ahorro: %.2f\n", Ahorro);
        printf("ml a gramos: %.2f\n", ml_Gramos);
        break;
        case 3:
        Densidad = 0.68;
        Radio_Tapa = pow((2 * Volumen)/12.56636,(0.3333));
        Area_Total = (2*3.14159*pow(Radio_Tapa, 2)) + (2*3.14159*Radio_Tapa*(Volumen/(3.14159*pow(Radio_Tapa, 2))));
        Costo_Fabricacion = Area_Total*0.00245;
        Ahorro = Costo_Anterior - Costo_Fabricacion;
        ml_Gramos = Volumen * Densidad;
        printf("Radio de la tapa: %.2f\n", Radio_Tapa);
        printf("Area total de la lata: %.2f\n", Area_Total);
        printf("Costo de fabricacion: %.2f\n", Costo_Fabricacion);
        printf("Costo anterior para lata: %.2f\n", Costo_Anterior);
        printf("Ahorro: %.2f\n", Ahorro);
        printf("ml a gramos: %.2f\n", ml_Gramos);
        break;
        case 4:
        Densidad = 0.79;
        Radio_Tapa = pow((2 * Volumen)/12.56636,(0.3333));
        Area_Total = (2*3.14159*pow(Radio_Tapa, 2)) + (2*3.14159*Radio_Tapa*(Volumen/(3.14159*pow(Radio_Tapa, 2))));
        Costo_Fabricacion = Area_Total*0.00245;
        Ahorro = Costo_Anterior - Costo_Fabricacion;
        ml_Gramos = Volumen * Densidad;
        printf("Radio de la tapa: %.2f\n", Radio_Tapa);
        printf("Area total de la lata: %.2f\n", Area_Total);
        printf("Costo de fabricacion: %.2f\n", Costo_Fabricacion);
        printf("Costo anterior para lata: %.2f\n", Costo_Anterior);
        printf("Ahorro: %.2f\n", Ahorro);
        printf("ml a gramos: %.2f\n", ml_Gramos);
        break;
    
    default:
    printf("Producto no válido\n");
        break;
    }
}

