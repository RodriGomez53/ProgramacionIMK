#include<stdio.h>

int main()
{
    int número=0;
    printf("Escriba un número:...\n");
    scanf("%d",&número);
      printf("Los números impares anteriores son:\n");
   for (int i = 1; i <= número; i = i + 2)
    {
        printf("%d",i);
        printf("\n");
    }
    
}
