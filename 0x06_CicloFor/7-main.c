#include<stdio.h>

int main()
{
    int número=0, sum=0;
    printf("Escriba un número:...\n");
    scanf("%d",&número);
     printf("La suma de todos los números anteriores es:\n");
    for (int i = 1; i <= número; i = i + 2)
    {
        sum = sum + i;
    
      printf("%d",sum);
        printf("\n");
    }
    
}
