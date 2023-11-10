#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    
    int numero;

    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    
    if (esPrimo(numero)) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }

    return 0;
}


