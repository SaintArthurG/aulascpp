#include <stdio.h>
int main (){

    double j, c, i, t, m;

    printf("Capital: ");
    scanf("%lf", &c);
    printf("Taxa de juros em porcentagem ao ano: ");
    scanf("%lf", &i);
    i = i / 100;
    printf("tempo em anos: ");
    scanf("%lf", &t);
    j = c*i*t;
    m = c + j;
    printf("Juros é igual a: %lf", j);
    printf("Montante é igual a: %lf", m);
}


