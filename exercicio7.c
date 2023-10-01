#include <stdio.h>

//7. Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10, além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.

int main() {
    int numAlunos = 30;
    double notas[numAlunos];
    double mediaGeral = 0.0;
    
    for (int i = 0; i < numAlunos; i++) {
        double n1, n2, n3, media;
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        
        media = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        notas[i] = media;
        
        printf("Media do aluno %d: %.2lf\n", i + 1, media);
        
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
        
        mediaGeral += media;
    }
    
    mediaGeral /= numAlunos;
    
    printf("Media geral da turma: %.2lf\n", mediaGeral);
    
    return 0;
}