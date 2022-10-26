#include <stdio.h>
int main()
{
    int i=0, j=0, filas=0, dif=0;
    printf("Ingrese el número de filas:\n");
    scanf("%d",&filas);
    dif = filas * 2;
   for ( i = filas; i > 0; i--)
   {
  for (j = dif; j > 0; j--)
  {
    if (j <= (filas - i) || j >= (filas + i))
    {
      printf(" ");

    }
    else{
      printf("*");
    }
  }
  printf("\n");
   }


}
