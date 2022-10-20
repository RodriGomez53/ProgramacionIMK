#include <stdio.h>
int main()
{
    int i=0, j=0, k=0,columnas, dif=0;
    printf("Ingrese el número de columnas:\n");
    scanf("%d",&columnas);
    dif = columnas * 2;
   for ( i = 1; i < dif; i++)
   {
    if (i!=columnas)
    {
    for ( j = 0; j < dif; j++)
    {
        if(j != columnas){
        printf(" ");
        }
        else
        {
        printf("+");
        };
    }
   }
   else
   {
    for ( k = -1; k < dif; k++)
    {
        printf("+");
    }
    
   }
    
    printf("\n");
   }

   
}
