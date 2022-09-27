#include <stdio.h>
int main()
{
   int num1, num2;
   printf("Enter two numbers:\n");
   scanf("%d%d",&num1, &num2);
if (num1 > num2)
{
    printf("El primer numero es mayor \n");
}
else if (num1 == num2)
{
    printf("Ambos números son iguales\n");

}
else  
{
    printf("El segundo número es mayor\n");
}

return 0;


}
