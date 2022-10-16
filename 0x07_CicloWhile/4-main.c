#include<stdio.h>

int main()
{
    int dig;
    long long num;
    printf("Ingrese un número\n");
    scanf("%lld",&num);
do
{
   num = num / 10;
        dig ++;
} while (num > 0);

    
     printf("El número tiene %d digitos\n",dig);
    return(0);
}
