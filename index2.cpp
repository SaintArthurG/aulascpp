#include<stdio.h>
int main (){
    double primeiroTrismestre, segundoTrimestre, terceiroTrimestre;
    double media;
    printf("primeiro trimestre: ");
    scanf("%lf", &primeiroTrismestre);
    printf("segundo trimestre: ");
    scanf("%lf", &segundoTrimestre);
    printf("terceiro trimestre: ");
    scanf("%lf", &terceiroTrimestre);
    media = (primeiroTrismestre + segundoTrimestre + terceiroTrimestre) / 3;
    printf("a media é: , %.2lf", media);    
}