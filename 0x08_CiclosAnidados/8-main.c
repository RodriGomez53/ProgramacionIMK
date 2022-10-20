#include<stdio.h>

int main()
{
int i=0,j=0, k=0,dif=0,columnas=0;
printf("Ingrese el número de columnas:\n");
    scanf("%d",&columnas);
    dif = (columnas * 2);
    for (i = 1; i < dif; i++)
    {
       if(i==1||i==columnas||i==dif-1)
        {
            for (j = 1; j <= columnas; j++)
            {
                if(j==1||j==columnas)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            
        }
        else
        {
             for (k = 1; k <= columnas; k++)
            {
                if(k==1||k==columnas)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
 printf("\n");   }
}
