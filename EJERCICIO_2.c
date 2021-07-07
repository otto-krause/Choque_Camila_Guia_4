#include <stdio.h>
#include <stdlib.h>
int main()
{
 /*Diseñar un algoritmo para calcular el perímetro y el área de un rectángulo.
PERÍMETRO P = 2 * a + 2 * b
ÁREA A= a * b*/
float a,b,P,A;
 printf("Ingrese el ancho y la altura de su rectangulo:\n");
printf("Altura: ");
 scanf("%f",&a);
 printf("Ancho: ");
 scanf("%f",&b);
 P= 2 * a + 2 * b;
 A= a * b;
 printf("\nEl perimetro de su rectangulo es: ");
 printf("%.2f\n",A);//Se muestra la misma variable en las dos salidas.
 printf("El area de su rectangulo es: ");
 printf("%.2f\n",A);
 return 0;
}