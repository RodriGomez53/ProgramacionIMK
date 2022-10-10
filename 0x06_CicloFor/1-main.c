#include<stdio.h>

int main()
{
    int número=0;
    printf("Escriba un número:...\n");
    scanf("%d",&número);
    for (int i = 1; i <= número; i++)
    {
        printf("%d",i);
        printf("\n");
    }
    
}
