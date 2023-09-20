#include <stdio.h>
int main () {
    int som, sub, mul, div, numb1, numb2;
    double resto;
    scanf("%i %i", &numb1, &numb2);
    som = numb1 + numb2;
    sub = numb1 - numb2;
    mul = numb1 * numb2;
    div = numb1 / numb2;
    resto = numb1 % numb2;
    printf("soma: %i!", som);
    printf("subtração: %i", sub);
    printf("multiplicação: %i", mul);
    printf("divisão: %i", div);
    printf("resto: %lf", resto);
}