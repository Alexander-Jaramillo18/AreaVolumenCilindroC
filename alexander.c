#include <stdio.h>
#include <stdlib.h>

int main()
{
   float radio;
   float altura;
   float area;
   float pi=3.1415;
   float volumen;

   printf("Hola, vamos a calcular el area de un cilindro, por favor ingresa los siguientes datos \n");
   printf("Ingresa el radio del cilindro \n");
   scanf("%f", &radio);
   printf("Ingresa altura del cilindro \n");
   scanf("%f", &altura);

   area = 2*pi*radio*(radio+altura);
   volumen = pi*(radio*radio)*altura;

   printf("El area del cilindro es: %f \n", area);
   printf("El volumen del cilindro es %f \n", volumen);


return 0;
}

