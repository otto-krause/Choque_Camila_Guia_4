#include <stdio.h>
#include <stdlib.h>
int main()
{
 int hora,num,a,b,c,SEG1,SEG2,SEG3,MINUT1,MINUT2,HORA1;
 float minut,seg,MINUT3,HORA2,HORA3;
 printf("Ingrese una hora(hs): ");
 scanf("%d",&hora);
 printf("Ingrese los minutos:(m): ");
 scanf("%f",&minut);
 printf("Ingrese los segundos:(s): ");
 scanf("%f",&seg);
 printf("El tiempo que establecio: %dh. %.0fm. %.0fs.",hora,minut,seg);
 printf("\n\nQue unidad elige?:\n");
 a=1;
 b=2;
 c=3;
 printf("Unidad Final: %d(s) \nUnidad Final: %d(m) \nUnidad Final: %d(hs) \n",a,b,c);
 scanf("%d",&num);
system("cls");
 if(num==a)
 {
 SEG1=hora*3600;
 SEG2=minut*60;
 SEG3=seg*1;
 printf("Su tiempo convertido a segundos:\n");
 printf("%dh.= %ds.\n",hora,SEG1);
 printf("%.4fm.= %ds.\n",minut,SEG2);
 printf("%ds.= %ds.",seg,SEG3);
 }
 else
 {
 if(num==b)
 {
 MINUT1=hora*60;
 MINUT2=minut*1;
 MINUT3=seg/60;
 printf("Su tiempo convertido a minutos:\n");
 printf("%dh.= %dm.\n",hora,MINUT1);
 printf("%.0fm.= %dm.\n",minut,MINUT2);
 printf("%.0fs.= %.2fm.",seg,MINUT3);
 }
 else
 {
 if(num==c)
 {
 HORA1=hora*1;
 HORA2=minut/60;
 HORA3=seg/3600;
 printf("Su tiempo convertido a horas:\n");
 printf("%dh.= %dh.\n",hora,HORA1);
 printf("%.0fm.= %.2fh.\n",minut,HORA2);
 printf("%.0fs.= %.4fh.",seg,HORA3);
 }
 else
 {
 printf("Opcion no valida\n");
 }
 }
 }
 return 0;
}