#include <stdio.h>
#include <stdlib.h>
int main()
{
 /*Se ingresan 3 números, informar si fueron ingresados en forma ascendente.*/
 int a,b,c;
 printf("Ingrese tres numeros\n");
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 if(a>b)
 {
 if(a>c)
 {
 printf("Los numeros estan ingresados de forma ascendente");
 }
 else
 {
 printf("Los numeros estan ingresados sin ningun orden");
 }
 }
 else
 {
 if(c>b)
 {
 printf("Los numeros estan ingresados de forma descendente");
}
 else
 {
 printf("Los numeros ingresados no tienen un orden pero %d es el numero mayor",b);
 }
 }
 return 0;
}