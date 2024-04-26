#include <stdio.h>
#include <math.h>

double absolute(double num) {
    return num >= 0 ? num : -num;
}

double nth_root(double num, int n) {
    if (n <= 0) {
        printf("Error: El índice de la raíz debe ser un entero positivo.\n");
        return 0;
    }

    double x = num < 1 ? 1 : num;
    double y = 1;
    double epsilon = 0.000001;  // Precisión deseada

    // Hasta que la diferencia entre x e y sea menor que epsilon, continuamos iterando
    while (absolute(x - y) > epsilon) {
        double temp = 1.0;
        for (int i = 1; i <= n - 1; ++i)
            temp *= x;

        x = ((n - 1) * x + num / temp) / n;
        y = num / temp;
    }
    return x;
}

int main() {
    float numero1, numero2, resultado;
    char operacion;

    printf("Ingrese la operacion (+, -, *, /, ^, r): ");
    scanf(" %c", &operacion);

    printf("Ingrese el numero 1: ");
    scanf("%f", &numero1);
    if (operacion != '^' && operacion != 'r') {
        printf("Ingrese el numero 2: ");
        scanf("%f", &numero2);
    }

    if (operacion == '+') {
        resultado = numero1 + numero2;
        printf("El resultado es: %g\n", resultado);
    }
    else if (operacion == '-') {
        resultado = numero1 - numero2;
        printf("El resultado es: %g\n", resultado);
    }
    else if (operacion == '*') {
        resultado = numero1 * numero2;
        printf("El resultado es: %g\n", resultado);
    }
    else if (operacion == '/') {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
            printf("El resultado es: %g\n", resultado);
        } else {
            printf("Error: división por cero.\n");
            return 1;
        }
    }
    else if (operacion == '^') {
        int indice;
        printf("Ingrese el índice de la raíz: ");
        scanf("%d", &indice);
        resultado = nth_root(numero1, indice);
        printf("El resultado es: %g\n", resultado);
    }
    else if (operacion == 'r') {
        resultado = sqrt(numero1);
        printf("El resultado es: %g\n", resultado);
    }
    else {
        printf("Operacion no valida.\n");
        return 1;
    }

    return 0;
}

