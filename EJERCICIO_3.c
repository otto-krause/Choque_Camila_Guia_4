#include <conio.h>
#include <stdio.h>
void main()
{
int A,B;
float D,E;
printf ("Ingrese la cantidad de Hombres postulados\n") ;
scanf ("%d" , &A);
printf ("Ingrese la cantidad de Mujeres postuladas\n") ;
scanf ("%d" , &B) ;
D=A*100/(A+B) ;
printf ("El porcentaje de Hombres postulados es: ");
printf("%.2f",D);
printf(" por ciento\n");
E=B*100/(A+B) ;
printf ("El porcentaje de Mujeres postuladas es: ") ;
printf("%.2f",E);
printf(" por ciento\n");
//return 0; 
}