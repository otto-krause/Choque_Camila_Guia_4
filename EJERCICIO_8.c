#include <stdio.h>
#include <stdlib.h>
int main()
{
 int age,IMP,DESC1,DESC2,DESC3;
 printf("Ingrese su edad\n");
 scanf ("%d",&age);
 IMP=1000/100*33;
 if(age<18)
 {
 printf("No se autoriza menores de edad");
 }
 else
 {
printf("Su importe total con impuestos:$%d",IMP+1000);
 printf("\nSu importa sin impuestos:$1000");
 }
 else
 {
 if(age>=50 && age<60)
 {
 printf("CONTIENE EL DESCUENTO DEL 20 por ciento\n");
 DESC1=1000-1000/100*20;
 printf("Su importe total con impuestos:$%d",DESC1+IMP);
 printf("\nSu importa sin impuestos:$%d",DESC1);
 }
 else
 {
 if(age>=60 && age<70)
 {
 printf("CONTIENE EL DESCUENTO DEL 30 por ciento\n");
 DESC2=1000-1000/100*30;
 printf("Su importe total con impuestos:$%d",DESC2+IMP);
 printf("\nSu importa sin impuestos:$%d",DESC2);
 }
 else
 {
 printf("CONTIENE EL DESCUENTO DEL 50 por ciento\n");
 DESC3=1000-1000/100*50;
 printf("Su importe total con impuestos:$%d",DESC3+IMP);
 printf("\nSu importa sin impuestos:$%d",DESC3);
 }
 }
 }
 }
 return 0;
}