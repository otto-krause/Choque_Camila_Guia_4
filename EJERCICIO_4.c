#include <stdio.h>
#include <stdlib.h>
int main()
{
 /*Calcular la presión sobre una superficie.*/
 float F,S,P;
 printf("Ingrese la cantidad de fuerza que establece su elemento\n");
 scanf("%f",&F);
 printf("Ingrese la superficie de su elemento\n");
 scanf("%f",&S);
 P=F/S;
 printf("\nLa presion que ejerce su elemento hacia la superficie es de: ");
 printf("%.2f",P);
 printf(" Pascal\n");
 return 0;
}