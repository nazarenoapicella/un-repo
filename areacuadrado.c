#include <stdio.h>

int main(){

float lado1, lado2, area;
	printf("Ingrese su alto en cm: ");
	scanf("%f", &lado1);
	printf("Ingrese su ancho en cm: ");
        scanf("%f", &lado2);

area= lado1 * lado2;

	printf("su area en cm² es: %g/n", area);
        
	return 0;


}
