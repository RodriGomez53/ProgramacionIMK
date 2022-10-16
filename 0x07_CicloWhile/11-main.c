#include<stdio.h>

int main()
{
    int número=0, sum=0, i=1;
    printf("Escriba un número:...\n");
    scanf("%d",&número);
     while (i <= número)
     {
        sum = sum +i;
        i = i + 2;
     }
     printf("La suma de todos los números impares anteriores es:\n%d\n",sum);
    
}
