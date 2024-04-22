#include <stdio.h>

int main(){

float pesos, dolares;

	printf("Ingrese el monto en ARS: ");
	scanf("%f", &pesos);

dolares = pesos/1000;

	printf("Su cantidad en USD Blue es: %g\n", dolares);

return 0;

}
