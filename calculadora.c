#include <stdio.h>
#include <math.h>

int main(){

	float numero1, numero2, resultado;
	char operacion;

	printf("Ingrese la operacion (+, -, *, /, ), ^): ");
	scanf("%c", &operacion);
	printf("Ingrese el numero 1: ");
        scanf("%f", &numero1);
	printf("Ingrese el numero 2: ");                                                                                         
	scanf("%f", &numero2);

if (operacion == '+') {
	resultado = numero1 + numero2;
	printf("El resultado es: %g\n", resultado);

}
if (operacion == '-') {
        resultado = numero1 - numero2;
        printf("El resultado es: %g\n", resultado);

}

if (operacion == '*') {
        resultado = numero1 * numero2;
        printf("El resultado es: %g\n", resultado);

}
if (operacion == '/') {  
        resultado = numero1 / numero2;
        printf("El resultado es: %g\n", resultado);

}

       else if (operacion == '^') {
        // Calcular el exponente multiplicando la base consigo misma
        resultado = 1;
        for (int i = 0; i < numero2; i++) {
            resultado *= numero1;
        }
    }
    else {
        printf("Operacion no valida.\n");
        return 1; // Salir del programa con error
    }

    printf("El resultado es: %g\n", resultado);

    return 0;
}
