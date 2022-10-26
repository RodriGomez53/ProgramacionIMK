#include <stdio.h>
int main()
{
    char dia;
    int hora, duracion, decision=0;
    float costo, precioxminuto;
while (1)
{
    printf("Para calcular el costo de una llamada presione 1, para finalizar la operación, presiona cualquier otra tecla.\n");
    scanf(" %d",&decision);
    if (decision == 1)
    {
    printf("Escriba el dia que se realizó la llamada:\nLunes = L\nMartes = M\nMiercoles = X\nJueves = J\nSabado = S\nDomingo = D\n");
    scanf(" %c", &dia);
    if ( dia == 'L' || dia == 'M' || dia == 'X' || dia == 'J' || dia == 'V' || dia == 'S' ||dia == 'D'
        || dia == 'l' || dia == 'm' || dia == 'x' || dia == 'j' || dia == 'v' || dia == 's' ||dia == 'd')
    {
    
    printf("Escriba la hora en que se realizó la llamada en formato de 24 horas sin signos o espacio.\n");
    scanf(" %d",&hora);
    if (hora < 0 || hora > 2400)
    {
        printf("Opcion no válida, reinicie el programa\n");
        return (0);
    }else{
    
    printf("Escriba la duración de la llamada en minutos.\n");
    scanf(" %d",&duracion);
    if (dia == 'S' || dia == 's' ||dia == 'D' ||dia == 'd')
    {
     precioxminuto = 0.10;
    }else{
        if (hora < 600 || hora > 2000)
        {
            precioxminuto = 0.20;
        }else{
            precioxminuto = 0.30;
        }
    }
    costo = precioxminuto * duracion;
    printf("El precio total por la llamada es:\n");
    printf("%f\n", costo);



    }}else{
        printf("Opcion no válida, reinicie el programa\n");
        return (0);
    }
    }else{
        return 0;
    }   
}
}
