#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero = 0;
  int numero1 = 0;
  int resultado = 0;

    printf("ingrese un numero");
    scanf("%d\n",numero );

    printf("ingrese el segundo numero" );
    scanf("%d",numero1 );

    resultado = numero + numero1;
     printf("resultado de la operacion", resultado );
    return 0;
}
