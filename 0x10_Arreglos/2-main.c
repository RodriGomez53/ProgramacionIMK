#include <stdio.h>

int main()
{
    int arr[100]; 
    int i, n;
    printf("Ingrese el numero de numeros que hay:\n");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Introduzca el %d numero:\n",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Los numeros negativos son:\n");
    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            printf(" %d ", arr[i]);
        }
    }
    return 0;
}
