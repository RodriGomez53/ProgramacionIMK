#include <stdio.h>

int main()
{
    int arr[100];
    int i, menos, random, i2, s;
    
    printf("Ingrese el tamano del arreglo:\n");
    scanf("%d", &s);
        printf("Ingrese %d numeros:\n",s);
    for(i=0; i<s; i++)
    {
     scanf("%d", &arr[i]);
    }
    for(i=0; i<s; i++,i2++)
    {
        arr[i]=arr[i2];
        printf("%d\n",arr[i2]);
    }

    }
