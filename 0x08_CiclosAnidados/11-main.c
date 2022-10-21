#include <stdio.h>

int main()
{
    int columnas = 0, i = 0, j= 0;

    printf("Ingrese el número de columnas:\n ");
    scanf("%d", &columnas);

    for(int i=columnas/2; i<=columnas; i+=2)
    {
        for(int j=1; j<columnas-i; j+=2)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        for(int j=1; j<=columnas-i; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(int i=columnas; i>=1; i--)
    {
        for(int j=i; j<columnas; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

}
