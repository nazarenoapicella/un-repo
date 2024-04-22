#include <stdio.h>

int main() {

float radio, area;
const float pi = 3.14159f;

	printf("Ingrese su radio en cm: ");
	scanf("%f", &radio);

area= pi * (radio*radio);

	printf("Su area en cm² es: %f\n", area);

return 0;


}
