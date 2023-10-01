#include <stdio.h>
#include <math.h>

//1. Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). 

int main() {
    double x, fx;
    
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    
    if (x * x - 16 < 0) {
        printf("Nao e possivel calcular f(x) para esse valor de x.\n");
    } else {
        fx = 5 * pow(x, 3) / sqrt(x * x - 16);
        printf("f(x) = %.2lf\n", fx);
    }
    
    return 0;
}