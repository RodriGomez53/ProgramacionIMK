#include<stdio.h>

int main()
{
    int dig;
    float num;
    printf("Ingrese un número\n");
    scanf("%d",&num);

    while (num = 0)
    {
        num = num / 10;
        dig ++;
    
    }
     printf("El número tiene %d digitos\n",dig);
    return(0);
}
