#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,b,c;
 printf("Ingrese tres numeros\n");
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 if(a==b)
 {
 if(b==c)
 {
 printf("Los valores ingresados son todos iguales");
 }
 else
 {
 printf("Hay dos valores iguales y uno distinto");
 }
 }
 else
 {
if(b==c)
 {
 printf("Hay dos valores iguales y uno distinto");
 }
 else
 {
 if(a==c)
 {
 printf("Hay dos valores iguales y uno distinto");
 }
 else
 {
 printf("Todos los valores ingresados son distintos");
 }
 }
 }
 return 0;
}