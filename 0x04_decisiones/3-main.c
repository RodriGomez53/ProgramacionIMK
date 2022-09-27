#include <stdio.h>
/*

*/

int main()
{
    int num1, num2, num3;
printf("Enter three numbers");
scanf("%d%d%d" ,&num1, &num2, &num3);
if (num1 > num2)
{
    if (num1 > num3)
    {
       printf("El número más grande es %d\n" ,num1); 
    }
    else{
        printf("El número más grande es %d\n" ,num3);
    }

}else 
{
    if (num2 > num3)
{printf("El número más grande es %d\n" ,num2);

}
else {printf("El número más grande es %d\n" ,num3);
}
}
return 0;

}
