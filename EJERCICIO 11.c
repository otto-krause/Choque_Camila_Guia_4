#include <conio.h>
#include <stdio.h>
int main()
{
float peso,alt,IMC;
printf("Ingrese su peso en Kg\n");
scanf("%f",&peso);
printf("Ingrese su altura en metros\n");
scanf("%f",&alt);
IMC=peso/(alt*alt);
if (IMC<=20)
{
 printf("Estado=Bajo peso");
}
else
{
 if (IMC<=25)
 {
 printf("Estado=Peso Ideal");
 }
 else
 {
 printf("Estado=Excedido");
 }
}
return 0;
}