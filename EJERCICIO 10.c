#include <conio.h>
#include <stdio.h>
int main()
{
float sueld,SUELD1;
printf("Ingrese su sueldo basico\n");
scanf("%f",&sueld);
printf("Ingrese a la categoria que pertenece\n");
scanf("%d",&categ);
if(categ==1)
{
 printf("Su sueldo basico es de $");
 SUELD1=sueld+sueld/100*10;
 printf("%.2f\n",SUELD1);
}
else
{
 if(categ==2)
 {
 printf("Su sueldo basico es de $");
 SUELD1=sueld+sueld/100*20;
 printf("%.2f\n",SUELD1);
 }
 else
 {
 printf("Su sueldo basico es de $");
 printf("%.2f\n",sueld,"\n");
}
}
 printf("\nIngresar la cantidad de hijos que tiene\n");
 scanf("%d",&hijo);
 if (hijo<=4)
 {
 PAGA=hijo*1000;
 printf("La paga total de hijos es:$%d",PAGA);
 }
 else
 {
 PAGA=hijo*1500;
 printf("La paga total de hijos es :$%d",PAGA);
 }
printf("\nLa paga mensual que recibira contando con todo lo anterior sera de:$");
printf("%.2f\n",SUELD1+PAGA,"\n");
return 0;
}