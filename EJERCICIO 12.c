#include <stdio.h>
#include <stdlib.h>
int main()
{
 char pais1[100];
 char pais2[100],pais3[100];
 int pobl;
 float DENS1,DENS2,DENS3,superf;
 printf("Ingrese el nombre de un pais\n");
 scanf("%s",&pais1);
 //printf("Prueba: %s\n", pais1);
 printf("La cantidad de poblacion: ");
 scanf("%d",&pobl);
 printf("Su superficie: ");
 scanf("%f",&superf);
 DENS1=pobl/superf;
 printf("\nIngrese el nombre de otro pais\n");
 scanf("%s",&pais2);
 printf("La cantidad de poblacion: ");
 scanf("%d",&pobl);
 printf("Su superficie: ");
 scanf("%f",&superf);
 DENS2=pobl/superf;
 printf("\nIngrese el nombre de otro pais\n");
 scanf("%s",&pais3);
 printf("La cantidad de poblacion: ");
 scanf("%d",&pobl);
 printf("Su superficie: ");
 scanf("%f",&superf);
 DENS3=pobl/superf;
 printf("\n%s tiene una densidad de %.2f Km cuadrado\n",pais1,DENS1);
 printf("%s tiene una densidad de %.2f Km cuadrado\n",pais2,DENS2);
 printf("%s tiene una densidad de %.2f Km cuadrado\n",pais3,DENS3);
 if (DENS1>DENS2)
 {
 if(DENS1>DENS3)
 {
 printf("\n%s tiene mayor densidad",pais1);
 }
 else
 {
 if(DENS3>DENS2)
 {
 printf("\n%s tiene mayor densidad",pais3);
 }else{
 printf("\n%s tiene mayor densidad",pais2);
 }
}
 }
 else{
 if (DENS2>DENS3)
 {
 printf("\n%s tiene mayor densidad",pais2);
 }else{
 if(DENS3>DENS1)
 {
 printf("\n%s tiene mayor densidad",pais3);
 }else{
 printf("\n%s tiene mayor densidad",pais1);
 }
 }
 }
 return 0;
}
