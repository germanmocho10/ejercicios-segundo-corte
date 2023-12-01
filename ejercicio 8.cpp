#include <stdio.h>

float promedio(int numeros[], int tamano) {
    int i;
    float suma = 0;
    for (i = 0; i < tamano; i++) {
        suma += numeros[i];
    }
    return suma / tamano;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamano = sizeof(numeros) / sizeof(numeros[0]);
    printf("El promedio de la lista es %.2f", promedio(numeros, tamano));
    return 0;
}
