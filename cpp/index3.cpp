#include <stdio.h>
int main (){
    double cel, far, kel;
    printf("graus em celcius: ");
    scanf("%lf", &cel);
    far = (cel * 9/5) + 32;
    kel = cel + 273,15;
    printf("temperatura em Celcius: %.2lf temperatura em Kelvin: %.3lf temperatura em Farenheitz: %.3lf", cel, kel, far);    
}