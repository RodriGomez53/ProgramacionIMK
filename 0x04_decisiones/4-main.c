#include <stdio.h>
/*
*Este programa revisa si un número es divisible entre 11 y 5
*/

int main()
{
int num1;
printf("Enter any number:");
scanf("%d",&num1);
if(num1 % 5 == 0)
{
    if(num1 % 11 == 0)
    {
        printf("El número es divisible entre 5 y 11\n");
    }
    else
    {
        printf("El número solo es divisible entre 5\n");
    }

}
else 
{
    if(num1 % 11 == 0)
    {
    printf("El número solo es divisible entre 11\n");
    }
    else 
    {printf("El número no es divisible entre 5 ni 11\n");
    }
}
cd 
    return 0;
}
