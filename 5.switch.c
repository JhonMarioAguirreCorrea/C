// Dependiendo del numero del mes ingresado mostrar su nombre
#include <stdio.h>
#include <stdlib.h>

int main (){

  int mes;

  printf("Ingrese por favor el nro del mes: ");
  scanf("%d", &mes);

  switch (mes)
  {
  case 1:
    printf("\nEnero \n");
    break;
  
  case 2:
    printf("\nFebrero \n");
    break;

case 3:
    printf("\nMarzo \n");
    break;
  
  case 4:
    printf("\nAbril \n");
    break;

case 5:
    printf("\nMayo \n");
    break;
  
  case 6:
    printf("\nJunio \n");
    break;

case 7:
    printf("\nJulio \n");
    break;
  
  case 8:
    printf("\nAgosto \n");
    break;

case 9:
    printf("\nSeptiembre \n");
    break;
  
  case 10:
    printf("\nOctubre \n");
    break;

case 11:
    printf("\nNoviembre \n");
    break;
  
  case 12:
    printf("\nDiciembre \n");
    break;

  default:
    printf("Mes invalido");
    break;
  }

system ("pause");
return 0;

}