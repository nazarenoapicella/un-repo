#include <stdio.h>


int main(){

	float numero1, numero2, resultado;
	char operacion;

	printf("Ingrese la operacion: ");
	scanf("%c", &operacion);
	printf("Ingrese el numero 1: ");
        scanf("%f", &numero1);
	printf("Ingrese el numero 2: ");                                                                                         scanf("%f", &numero2);

if (operacion == '+') {
	resultado = numero1 + numero2;
	printf("El resultado es: %g\n", resultado);

}

return 0;

}

