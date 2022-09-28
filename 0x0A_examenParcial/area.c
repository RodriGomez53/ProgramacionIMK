#include <stdio.h>
#include <math.h>
#include "main.h"
float area(float volumen)
{
    float Volumen=0, Radio_Tapa=0, area=0, Costo_Fabricacion=0, Costo_Anterior=1.68, Ahorro=0, ml_Gramos=0, Densidad=0;

        Radio_Tapa = pow((2 * Volumen)/12.56636,(0.3333));
        area = (2*3.14159*pow(Radio_Tapa, 2)) + (2*3.14159*Radio_Tapa*(Volumen/(3.14159*pow(Radio_Tapa, 2))));
        Costo_Fabricacion = area*0.00245;
        Ahorro = Costo_Anterior - Costo_Fabricacion;
        ml_Gramos = Volumen * Densidad;
}