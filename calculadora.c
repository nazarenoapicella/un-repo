#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    char operacion;

    printf("Ingrese la operacion (+, -, *, /, ^): ");
    scanf(" %c", &operacion);

    printf("Ingrese el numero 1: ");
    scanf("%f", &numero1);
    printf("Ingrese el numero 2: ");
    scanf("%f", &numero2);

    if (operacion == '+') {
        resultado = numero1 + numero2;
        printf("El resultado es: %g\n", resultado);
    } else if (operacion == '-') {
        resultado = numero1 - numero2;
        printf("El resultado es: %g\n", resultado);
    } else if (operacion == '*') {
        resultado = numero1 * numero2;
        printf("El resultado es: %g\n", resultado);
    } else if (operacion == '/') {
        resultado = numero1 / numero2;
        printf("El resultado es: %g\n", resultado);
    } else if (operacion == '^') {
        resultado = 1;
        for (int i = 0; i < numero2; i++) {
            resultado *= numero1;
        }
        printf("El resultado es: %g\n", resultado);
    } else {
        printf("Operacion no valida.\n");
        return 1;
    }

    return 0;
}
