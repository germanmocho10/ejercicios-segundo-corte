#include <stdio.h>

int main() {
    int numero;

    
    printf("Ingresa un numero para ver su tabla de multiplicar: ");
    scanf("%d", &numero);

   
    printf("Tabla de multiplicar del %d:\n", numero);

    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

