#include<stdio.h>

int main()
{
    int número=0;
    printf("Escriba un número:...\n");
    scanf("%d",&número);
    
   for (int i = número; i > 0; i--)
    {
        printf("%d",i);
        printf("\n");
    }
    
}
