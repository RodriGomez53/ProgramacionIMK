#include <stdio.h>

int main() {
 int  i, j;
 int PosX = 1;
 int PosY = 0;
 int X = 8;
 int Y = 8;
 char Move;
 char lab[X][Y];
 char a;



 
 while (1)
 {
    /* code */
 
 
 for ( i = 0; i < X; i++){
   
     for ( j = 0; j < Y ; j++){
         if (j == 0) 
         {printf("[&]");}
         else{
if(j == 2 && i < 7){printf("[&]");}
    else{
        if(j == 3 && i == 6){printf ("[&]");}
        else{
            if(j == 4 && i < 7){printf ("[&]");}

            else{
                if(j > 5 && i > 0){printf ("[&]");}


    
         else{
            if(j == PosX && i == PosY){printf("[+]");}
            else{
         {printf("[ ]");}
         
         }}}}}}}
     printf("\n");
 }
printf("Elija a donde quiere moverse: W A S D \n");
scanf(" %c", &Move);
switch (Move)
{
case 'w':
    PosY--;
if (PosX > 1 && PosX < 5 && PosY == 6)
{
 printf("Movimiento no válido.\n");
  PosY++;
}

    break;

case 'W':
PosY--;
if (PosX > 1 && PosX < 5 && PosY == 6)
{
 printf("Movimiento no válido.\n");
  PosY++;
}


break;

case 'a':
PosX--;


if (PosX == 4 && PosY < 7 )
{
  printf("Movimiento no válido.\n");
  PosX++;
}


break;

case 'A':
PosX--;


if (PosX == 4 && PosY < 7 )
{
  printf("Movimiento no válido.\n");
  PosX++;
}




break;

case 's':
PosY++;
if (PosX > 5 && PosX < 8)
{
     printf("Movimiento no válido.\n");
  PosY--;
}




break;

case 'S':

PosY++;
if (PosX > 5 && PosX < 8)
{
     printf("Movimiento no válido.\n");
  PosY--;
}


break;

case 'd':

PosX++;

if (PosX == 2 && PosY < 7 )
{
  printf("Movimiento no válido.\n");
  PosX--;
}
if (PosX == 6 && PosY > 0)
{
    printf("Movimiento no válido.\n");
  PosX--;
}


break;

case 'D':

PosX++;

if (PosX == 2 && PosY < 7 )
{
  printf("Movimiento no válido.\n");
  PosX--;
}
if (PosX == 6 && PosY > 0)
{
    printf("Movimiento no válido.\n");
  PosX--;
}


break;

default:
printf ("Opcion no válida.\n");
    break;
}
if (PosY < 0)
{
    printf("Movimiento no válido.\n");
    PosY++;
}
else{
    if (PosY > 7)
    {
        printf("Movimiento no válido.\n");
    PosY--;

    }
    
}

if (PosX < 1)
{
    printf("Movimiento no válido.\n");
    PosX++;
}





printf("%d\n",PosX);
printf("%d\n",PosY);

if (PosX == 8 && PosY == 0)
{
    printf("Felicidades, ganaste el juego\n");
    return 0;
}


}
}
         

