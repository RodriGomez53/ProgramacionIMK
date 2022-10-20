#include <stdio.h>
int main()
{
    int i=0, j=0, diagonales=0, dif=0, dec=0, inc=0;
    printf("Ingrese el tamaño de las diagonales:\n");
    scanf("%d",&diagonales);
    dif = diagonales * 2;
    dec = diagonales;
   for ( i = 0; i < diagonales; i++)
   {
  for (j = 0; j < dif; j++)
  {
   
    if (j <= diagonales - i || j >= diagonales + i)
    {
      printf(" ");

    }
    else
    {
      printf("*");
    }
  }
  printf("\n");
   }

   for ( i = i; i > 0; i--)
   {
  for (j = dif; j > 0; j--)
  {
    if (j <= (diagonales - i) || j >= (diagonales + i))
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
