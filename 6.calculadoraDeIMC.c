//Calculadora de indice de masa corporal.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

      
  float altura, peso, IMC;

  printf("Calculadora de indice de masa corporal\n\n");
  printf("Por favor ingrese su peso en kg y estatura en metros:\n");
  printf("Altura(m): ");
  scanf("%f", &altura);
  printf("\nPeso(kg): ");
  scanf("%f", &peso);
  
  IMC = peso/(pow(altura, 2));
  
  if(IMC < 18.5)
  {printf("\nUsted es un flacow");}

  else if(IMC > 18.5 && IMC < 25)
  {printf("\nUsted esta en un peso adecuado");}

  else if(IMC > 25 && IMC < 30)
  {printf("\nUsted esta en sobrepeso");}

  else if(IMC > 30) 
  {printf("\nUsted tiene obesidad");}

  printf("\nSu IMC es: %f\n", IMC);




    system ("pause");
    return 0;

}