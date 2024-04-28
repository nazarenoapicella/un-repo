#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, resultado;
    char operacion;

    printf("Ingrese la operacion (+, -, *, /, ^, r): ");
    scanf(" %c", &operacion);

    if (operacion == '+') {
    printf("Ingrese el numero 1: ");
    scanf("%f", &numero1);
    printf("Ingrese el numero 2: ");
    scanf("%f", &numero2);
    resultado = numero1 + numero2;
    printf("El resultado es: %g\n", resultado);
    }
    else if (operacion == '-') {
    printf("Ingrese el numero 1: ");
    scanf("%f", &numero1);
    printf("Ingrese el numero 2: ");
    scanf("%f", &numero2);
    resultado = numero1 - numero2;
    printf("El resultado es: %g\n", resultado);
    }
    else if (operacion == '*') {
    printf("Ingrese el numero 1: ");
    scanf("%f", &numero1);
    printf("Ingrese el numero 2: ");
    scanf("%f", &numero2);
    resultado = numero1 * numero2;
    printf("El resultado es: %g\n", resultado);
    }
    else if (operacion == '/') {
    printf("Ingrese el numero 1: ");
    scanf("%f", &numero1);
    printf("Ingrese el numero 2: ");
    scanf("%f", &numero2);
    resultado = numero1 / numero2;
    printf("El resultado es: %g\n", resultado);
    }
    else if (operacion == '^') {
    printf("Ingrese el numero 1: ");
    scanf("%f", &numero1);
    printf("Ingrese el numero 2: ");
    scanf("%f", &numero2);
    resultado = 1;
    for (int i = 0; i < numero2; i++) {
    resultado *= numero1;
    }
    printf("El resultado es: %g\n", resultado);
    }
    else if (operacion == 'r') {
    printf("Ingrese el numero a radicar: ");
    scanf("%f", &numero1);
    resultado = sqrt(numero1);
    printf("El resultado es: %g\n", resultado);
    }
    else {
    printf("Operacion no valida.\n");
    return 1;
    }

    return 0;
} 
