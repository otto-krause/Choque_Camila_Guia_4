#include <stdio.h>
#include <stdlib.h>
int main()
{
 float num,oct;
 printf("Ingrese un numero\n");
 scanf("%f",&num);
 oct=num/8;
 printf("La octava parte de ");
 printf("%.2f",num);
 printf(" es ");
 printf("%.2f\n",oct);
 return 0;
}