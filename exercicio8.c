#include <stdio.h>

//8. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

int main() {
    float salario, mediaSalario = 0.0, maiorSalario = 0.0;
    int numFilhos, totalPessoas = 0, totalSalarioAte100 = 0;
    
    do {
        printf("Digite o salario (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);
        
        if (salario >= 0) {
            printf("Digite o numero de filhos: ");
            scanf("%d", &numFilhos);
            
            mediaSalario += salario;
            
            if (salario <= 100.0) {
                totalSalarioAte100++;
            }
            
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }
            
            totalPessoas++;
        }
    } while (salario >= 0);
    
    if (totalPessoas > 0) {
        mediaSalario /= totalPessoas;
        
        printf("Media do salario da populacao: %.2f\n", mediaSalario);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual de pessoas com salario ate R$100.00: %.2f%%\n", (float)totalSalarioAte100 / totalPessoas * 100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }
    
    return 0;
}