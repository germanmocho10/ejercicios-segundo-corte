#include <stdio.h>

int factorial(int n) {
    int i;
    int fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 5;
    printf("El factorial de %d es %d", n, factorial(n));
    return 0;
}
