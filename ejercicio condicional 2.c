#include <stdio.h>

int main() {
    
    int anio;


    printf("Ingrese un a�o: ");
    scanf("%d", &anio);

    
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        printf("%d es un a�o bisiesto.\n", anio);
    } else {
        printf("%d no es un a�o bisiesto.\n", anio);
    }

    return 0;
}

