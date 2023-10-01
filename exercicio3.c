#include <stdio.h>

//3. Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.

int main() {
    float a, b, c;
    
    printf("Digite os valores dos lados do triangulo (A, B, C): ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triangulo equilatero\n");
        } else if (a != b && b != c && c != a) {
            printf("Triangulo escaleno\n");
        } else {
            printf("Triangulo isosceles\n");
        }
    } else {
        printf("Nao e um triangulo valido.\n");
    }
    
    return 0;
}