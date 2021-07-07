#include <stdio.h>
#include <stdlib.h>
int main()
{
 float a,b;
 printf("Ingrese dos numeros\n");
 scanf("%f",&a);
 scanf("%f",&b);
 
 if(a<b)
{
 printf("%.2f es menor que %.2f",a,b);
 }
 else
 {
 if(a>b)
 {
 printf("%.2f es mayor que %.2f",a,b);
 }
 else
 {
 if(a==b)
 {
 printf("%.2f es igual a %.2f",a,b);
 }
 else
 {
 printf("%.2f es menor que %.2f",b,a);
 }
 }
 }
return 0;
}