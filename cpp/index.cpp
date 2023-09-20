#include <stdio.h>

int main(){
    int idade;
    float altura;
    double peso;
    double salario;
    double salario_minimo;
    double x_salario;
    x_salario = salario / salario_minimo;
    
    printf("Salario minimo: ");
    scanf("%d", &salario_minimo);
    printf("Salario: \n");
    scanf("%d", &salario);
    printf("Você possui: %.2d", x_salario, " de salario minimo");
    printf("Salario: %d", salario);
}