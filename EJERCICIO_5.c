#include <stdio.h>
#include <stdlib.h>
int main()
{
 float R1,R2,R3,R4,R5,Rt;
 printf("Ingrese el valor numerico de sus 5 resistencias\n");
 scanf("%f",&R1);
 scanf("%f",&R2);
 scanf("%f",&R3);
 scanf("%f",&R4);
 scanf("%f",&R5);
 Rt=R1+R2+R3+R4+R5;
 printf("La resistencia total de las 5 resistencias en serie es: ");
 printf("%.2f",Rt);
 printf(" ohm\n");
 printf("\nLa operacion se realiza de la siguiente forma:\n");
 printf("Rt=R1+R2+R3+R4+R5\n");
 printf("\nDonde:\n");
 printf("%.2f",Rt);
 printf(" ohm = ");
 printf("%.2f",R1);
 printf(" ohm + ");
 printf("%.2f",R2);
printf(" ohm + ");
 printf("%.2f",R3);
 printf(" ohm + ");
 printf("%.2f",R4);
 printf(" ohm + ");
 printf("%.2f",R5);
 printf(" ohm\n");
 return 0;
}