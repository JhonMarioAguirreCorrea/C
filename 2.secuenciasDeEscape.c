
// SECUENCIAS DE ESCAPE= Del tipo \n, \t, \r, etc.


// OPERADORES DE INCREMENTO O DECREMENTO= ++ --


// Ejercicio: Pedir dos notas y calcular el promedio.

#include <stdio.h>
#include <stdlib.h> //Lib para poder usar el system ("pause")

int main(){

  float nota1, nota2;

  printf("Por favor ingrese la primer nota: ");
  scanf("%f", &nota1);

  printf("\nPor favor ingrese la segunda nota: ");
  scanf("%f", &nota2);

  float notaF = ((nota1+nota2)/2);

  printf("\n\nLa nota final es %.2f \n", notaF);

    system ("pause"); 
    return 0; 
}



