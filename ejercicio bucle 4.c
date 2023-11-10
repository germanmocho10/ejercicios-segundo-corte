#include <stdio.h>

int main() {
    // Definir una lista de números
    int numeros[] = {1, 5, 8, 10, 15, 20};


    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    
    printf("Usando bucle for:\n");
    for (int i = 0; i < longitud; ++i) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    
    printf("Usando bucle while:\n");
    int j = 0;
    while (j < longitud) {
        printf("%d ", numeros[j]);
        j++;
    }
    printf("\n");

    
    printf("Usando bucle do-while:\n");
    int k = 0;
    do {
        printf("%d ", numeros[k]);
        k++;
    } while (k < longitud);
    printf("\n");

    return 0;
}

