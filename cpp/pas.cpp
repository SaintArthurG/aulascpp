#include <stdio.h>
int main () {
    double peso1, peso2, peso3, pas1, pas2, pas3, media;
    printf("insira as notas dos três pas começando do pas 1: ");
    scanf("%lf %lf %lf", &pas1, &pas2, &pas3);
    printf("Insira os pesos dos três pas começando do pas 1: ");
    scanf("%lf %lf %lf", &peso1, &peso2, &peso3);
    pas1 = pas1 * peso1;
    pas2 = pas2 * peso2;
    pas3 = pas3 * peso3;
    media = (pas1 + pas2 + pas3) / (peso1 + peso2 + peso3);
    printf("Os pesos das provas do pas 1, pas 2 e pas 3, serão multiplicados por 1, 2 e 3 respectivamente, sendo a media ponderada : %.2lf", media);
}