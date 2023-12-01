
#include <stdio.h>

int main() {
    double numero;
    printf("Ingrese un número: ");
    scanf("%lf", &numero);

    if (numero > 0) {
        printf("%.2lf es positivo.", numero);
    }
    else if (numero < 0) {
        printf("%.2lf es negativo.", numero);
    }
    else {
        printf("El número es cero.");
    }

    return 0;
}

