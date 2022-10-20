#include <stdio.h>

int main()
{
    int i, j, filas, columnas;
    printf("Ingrese el número de filas:\n");
    scanf("%d",&filas);
    printf("Ingrese el número de columnas:\n");
    scanf("%d",&columnas);
    for ( i = 1; i <= filas; i++)
    {
        for ( j = 1; j <= columnas; j++)
        {
            if(i == 1 || i == filas || j == 1 || j == columnas || i == j || i == ((filas - j) + 1) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return (0);
}
