#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un n�mero entero: ");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("%d es un n�mero par.", num);
    }
    else {
        printf("%d es un n�mero impar.", num);
    }
    return 0;
}
