#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, N, p;
    
    printf("Introduzca el tamaño del arreglo:\n");
    scanf("%d", &n);
    printf("Ingrese %d numeros:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Ingrese numero a ingresar:\n");
    scanf("%d", &N);
    printf("Ingrese la posicion en la cual desea poner un numero:\n");
    scanf("%d", &p);
    if(p < n)
    {
        for(i=n; i>=p; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[p-1] = N;
        n++;
        printf("El nuevo arreglo queda:\n ");
        for(i=0; i<n; i++)
        {
            printf("%d   ", arr[i]);
        }
    } 
}
