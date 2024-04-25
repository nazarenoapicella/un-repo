#include <stdio.h>

int main() {
    float dolares = 0, euros = 0, pesos = 0;
    int divisa;

    printf("Ingrese la divisa (pesos = 1, USD = 2, y euros = 3): ");
    scanf("%d", &divisa);

    if (divisa == 1) {
        printf("Ingrese la cantidad en pesos: ");
        scanf("%f", &pesos);
        
        dolares = pesos / 1000;
        euros = pesos / 934;
    } else if (divisa == 2) {
        printf("Ingrese la cantidad en USD: ");
        scanf("%f", &dolares);
        
        pesos = dolares * 1000;
        euros = pesos / 934;
    } else if (divisa == 3) {
        printf("Ingrese la cantidad en euros: ");
        scanf("%f", &euros);
        
        dolares = euros * 1.07;
        pesos = euros * 934;
    }

    printf("Su cantidad en dólares es: %g\n", dolares);
    printf("Su cantidad en pesos es: %g\n", pesos);

    return 0;
}

