#include <stdio.h>

int main()
{
    int i, j, filas, columnas;
    printf("Ingrese el número de filas:\n");
    scanf("%d",&filas);
    printf("Ingrese el número de columnas:\n");
    scanf("%d",&columnas);
    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return (0);
}
