#include <stdio.h>
int main()
{
    int i, j=0, columnas=0, incremento = 1;
    printf("Ingrese el número de columnas:\n");
    scanf("%d",&columnas);
    for ( i = 0; i < columnas; i++)
    {  
    
        for ( j = 0; j <= i; j++)
        {
            printf("*");
            
        }
         printf("\n");
    }
    i--;
    for ( i = i; i > 0; i--)
    {  
    
        for ( j = i; j > 0; j--)
        {
            printf("*");
            
        }
         printf("\n");
    }
    return (0);
}
