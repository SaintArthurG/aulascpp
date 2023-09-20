#include <stdio.h>
int main (){
    int nmb1, nmb2, soma;
    printf("numeros a ser somado: ");
    scanf("%i %i", &nmb1, &nmb2);
    soma = nmb1 + nmb2;
    printf("resultado da soma: %i", soma);
}