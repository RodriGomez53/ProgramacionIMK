#include <stdio.h>

int main()
{
    int arr[100];
    int i, max, max2, s;
    printf("Ingrese el tamano del arreglo:\n");
    scanf("%d", &s);
    for(i=0; i<s; i++)
    {
        printf("Ingrese el %d numero: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<s; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d es impar\n",arr[i]);
        }
            
        if(arr[i]%2!=1)
        {
            printf("%d es par\n",arr[i]);
        }
            }
    }
    