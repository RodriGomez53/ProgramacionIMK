#include <stdio.h>
int main()
{
    int arr[1000];
    int i, n, sum=0;
    printf("Ingrese el numero de numeros:\n");
    scanf("%d", &n);
    printf("Introduzca %d numeros:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        suma = suma + arr[i];
    }

    printf("La suma de los numeros es de:\n%d", suma);

    return 0;
}
