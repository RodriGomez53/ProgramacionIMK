#include<stdio.h>

int main()
{
    int número=0;
    printf("Escriba un número:...\n");
    scanf("%d",&número);
    printf("Los números pares anteriores son:\n");
    for (int i = 2; i <= número; i = i + 2)
    {
         printf("%d",i);
        printf("\n");
    }
    
}
