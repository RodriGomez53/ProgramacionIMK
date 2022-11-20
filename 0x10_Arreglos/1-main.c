#include <stdio.h>
 
int main()
{
    int a[1000],s,n;  
 
     printf("Ingrese un numero:\n");
    scanf("%d",&n);

     printf("Ingrese %d numeros:\n", n);
    for(s=0;s<n;s++)
    {
        scanf("%d", &a[s]);
    }

    printf("Los numeros del arreglo son:\n");
    for(s=0;s<n;s++)

    {
        printf("%d\n", a[s]);
    }

    return 0;
}
