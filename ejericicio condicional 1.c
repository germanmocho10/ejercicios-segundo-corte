#include <stdio.h>

int main() {

    int numero1, numero2;

    
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    
    if (numero1 > numero2) {
        printf("%d es mayor que %d\n", numero1, numero2);
    } else if (numero2 > numero1) {
        printf("%d es mayor que %d\n", numero2, numero1);
    } else {
        printf("Ambos numeros son iguales\n");
    }

    return 0;
}

