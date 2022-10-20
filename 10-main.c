#include <stdio.h>
int main()
{
    int i, j=0, filas=0, columnas=0;
    printf("Ingrese el número de filas:\n");
    scanf("%d",&filas);
    columnas = filas * 2;
    for ( i = 0; i < filas; i++)
    {   
    
        for ( j = 0; j < columnas; j++)
        {
            if (j>=i*2)
            {
            if (j < (filas - i)+(i * 2))
            {
             printf("*");   
            }}
            else
            {
             printf(" ");
            }
            
            
        }
         printf("\n");
    }
      for ( i = i--; i > 0; i--)
    {   
    
        for ( j = columnas--; j > 0; j--)
        {
            if (j < filas - (i / 2))
            {
            if (j < (filas - i)+(i / 2) )
            {
             printf("*");   
            }
            else
            {
                printf(" ");
            }
            }
            else
            {
             printf(" ");
            }
            
            
        }
         printf("\n");
    }
    }
  