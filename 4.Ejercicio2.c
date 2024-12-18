//Verificar si un numero es par.

#include <stdio.h>
#include <stdlib.h>

int main (){

int nro;

printf("Ingrese por favor el numero: ");
scanf("%d", &nro);

if((nro%2)==0)

{
    printf("\nEl numero es par \n");
}
 else
{
     printf("\nEl numero no es par \n");
}

system("pause");
return 0;

}

