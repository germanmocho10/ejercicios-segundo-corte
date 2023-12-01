
#include <stdio.h>

int sumar(int num1, int num2) {
    int suma = num1 + num2;
    return suma;
}

int main() {
    int a = 5;
    int b = 3;
    int resultado = sumar(a, b);
    printf("La suma es: %d\n", resultado);

    return 0;
}

