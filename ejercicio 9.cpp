#include <stdio.h>
#include <stdlib.h>

int contarDigitos(int Num) {
    int Contador, Num2;
    Num2 = Num;
    Contador = 0;
    while (Num != 0) {
        Contador++;
        Num = (Num / 10);
    }
    printf("La cantidad de digitos del Numero [%d] es = %dn", Num2, Contador);
}

int main() {
    int Num;
    printf("Ingresa un numero : ");
    scanf("%d", &Num);
    printf("------n");
    contarDigitos(Num);
    system("pause");
}
