#include <stdio.h>
#include <math.h>

int main() {
    
    double lado1, lado2, lado3;

    
    printf("Ingrese la longitud del lado 1: ");
    scanf("%lf", &lado1);

    printf("Ingrese la longitud del lado 2: ");
    scanf("%lf", &lado2);

    printf("Ingrese la longitud del lado 3: ");
    scanf("%lf", &lado3);

    
    double semiperimetro = (lado1 + lado2 + lado3) / 2;

    
    double area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

    
    printf("El area del triangulo es: %lf\n", area);

    return 0;
}

