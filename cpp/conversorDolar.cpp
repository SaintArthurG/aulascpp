#include <stdio.h>
int main () {
    double real, dolar_americano;
    printf("Valor em dolares americanos: ");
    scanf("%lf", &dolar_americano);
    real = dolar_americano * 4.85;
    printf("Dolar convertido em real: %.2lf", real);
}