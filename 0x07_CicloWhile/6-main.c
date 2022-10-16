#include <stdio.h>


int main()
{
    int First = 0, Last = 0, N = 0, Suma = 0;
    printf("Inserte un número\n");
    scanf("%d",&N);
    Last = N / 10;
    Last = N - (Last * 10);
   
   while (N > 9)
    {
        
        N = N / 10 ;

    }
    Suma = N + Last;
    printf("La suma del primer dígito con el último es:\n");
    printf("%d\n",Suma);
}
