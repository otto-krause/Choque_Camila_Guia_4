#include <stdio.h>
#include <stdlib.h>
int main()
{
 int hour,sueld;
 char categ;
 printf("\nIngrese la categoria a la que pertenece\n");
 scanf("%c",&categ);
 printf("Ingrese la cantidad de horas que trabaja\n");
 scanf("%d",&hour);
 if(categ=='A')
 {
 printf("Su sueldo ganado es:$%d",hour*200);
 }
 else
 {
 if(categ=='B')
 {
 printf("Su sueldo ganado es:$%d",hour*180);
 }
 else
 {
 if(categ=='C')
 {
 printf("Su sueldo ganado es:$%d",hour*150);
 }
 else
 {
 printf("Su sueldo ganado es:$0");
 }
 }
 }
 return 0;
}