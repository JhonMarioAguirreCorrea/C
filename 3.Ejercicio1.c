// Pedir la edad del usuario y verificar si es mayor de edad.

#include <stdio.h>
#include <stdlib.h>

int main (){

 int edad;

 printf("Por favor ingrese su edad: ");
 scanf("%d", &edad);

if(edad>=18)

{
    printf("\nEres mayor de edad. ");
} else

{
   printf("\nEres menor de edad. ");
}

system ("pause");
return 0;

}