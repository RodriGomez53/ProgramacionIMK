#include <stdio.h>

int main()
{
    int arr[100];
    int i, max, min, s;
    printf("Ingrese el tamaño del arreglo:\n");
    scanf("%d", &s);
    for(i=0; i<s; i++)
    {
        printf("Ingrese el %d numero: ",i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i<s; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("El numero mas pequeño es de:%d\n", min);
    printf("El numero mas grande es de: %d\n", max);
    return 0;
}
