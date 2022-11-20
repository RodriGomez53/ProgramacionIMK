#include <stdio.h>

int main()
{
    int arr[100];
    int i, menos, random, s;
    
    printf("Ingrese el tamano del arreglo:\n");
    scanf("%d", &s);
    for(i=0; i<s; i++)
    {
        printf("Ingrese el %d numero:\n",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<s; i++)
    {
        if (arr[i]<0)

        {
        random=random+1;
        }
            }
            printf("Hay %d numeros negativos",random);
    }
