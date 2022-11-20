#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, p;
    
    printf("Introduzca el tamano del arreglo:\n");
    scanf("%d", &n);
    printf("Introduzca %d numeros:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Introduzca la posicion del elemento a eliminar:\n");
    scanf("%d", &p);
    if(p<0)
    {
        printf("Error");
    }
    else
    {
        for(i=p; i<n; i++)
        {
            arr[i] = arr[i+1];
        }
        n--;
        printf("El nuevo arreglo es:\n");
        for(i=0; i<n; i++)
        {
            printf("%d  ", arr[i]);
        }
    }
}
