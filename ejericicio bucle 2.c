#include <stdio.h>

int main() {
    int numero, suma = 0;

    // Solicitar al usuario que ingrese un n�mero
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Calcular la suma de los n�meros desde 1 hasta el n�mero dado
    for (int i = 1; i <= numero; ++i) {
        suma += i;
    }

    // Mostrar el resultado
    printf("La suma de los numeros desde 1 hasta %d es: %d\n", numero, suma);

    return 0;
}

