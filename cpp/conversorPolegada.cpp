#include <stdio.h>
int main () { 
    double pol, polegadasEmCm;
    printf("Quantos polegadas: ");
    scanf("%lf", &pol);
    polegadasEmCm = pol * 2.54;
    printf("As polegas em centimetros é: %.2lf", polegadasEmCm);    
}