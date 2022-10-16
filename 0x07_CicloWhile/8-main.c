#include<stdio.h>

int main()
{
    int número=0, i=2;
    printf("Escriba un número:...\n");
    scanf("%d",&número);
    printf("Los números pares anteriores son:\n");
    while (i < número)
    {
        printf("%d\n",i);
        i = i+2;
    }
    
}
