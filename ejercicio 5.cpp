#include <stdio.h>
#include <stdbool.h>

bool es_primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 7;
    if (es_primo(n)) {
        printf("%d es primo", n);
    } else {
        printf("%d no es primo", n);
    }
    return 0;
}
