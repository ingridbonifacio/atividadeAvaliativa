#include <stdio.h>
#include <string.h>

//10. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  

int main() {
    int codigoCidade, numCidades;
    char estado[3];
    int veiculos1992, acidentes1992;
    
    int maiorIndiceAcidentes = -1, menorIndiceAcidentes = -1;
    char cidadeMaior[3], cidadeMenor[3];
    
    int totalVeiculos = 0;
    int totalAcidentesRS = 0, numCidadesRS = 0;
    
    printf("Digite o numero de cidades: ");
    scanf("%d", &numCidades);
    
    for (int i = 0; i < numCidades; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("Codigo da cidade: ");
        scanf("%d", &codigoCidade);
        
        printf("Estado (2 letras): ");
        scanf("%s", estado);
        
        printf("Numero de veiculos de passeio (em 1992): ");
        scanf("%d", &veiculos1992);
        
        printf("Numero de acidentes de transito com vitimas (em 1992): ");
        scanf("%d", &acidentes1992);
        
        if (maiorIndiceAcidentes == -1 || acidentes1992 > maiorIndiceAcidentes) {
            maiorIndiceAcidentes = acidentes1992;
            strcpy(cidadeMaior, estado);
        }
        
        if (menorIndiceAcidentes == -1 || acidentes1992 < menorIndiceAcidentes) {
            menorIndiceAcidentes = acidentes1992;
            strcpy(cidadeMenor, estado);
        }
        
        totalVeiculos += veiculos1992;
        
        if (strcmp(estado, "RS") == 0) {
            totalAcidentesRS += acidentes1992;
            numCidadesRS++;
        }
    }
    
    printf("Maior indice de acidentes: %d (Cidade: %s)\n", maiorIndiceAcidentes, cidadeMaior);
    printf("Menor indice de acidentes: %d (Cidade: %s)\n", menorIndiceAcidentes, cidadeMenor);
    printf("Media de veiculos nas cidades brasileiras: %.2f\n", (float)totalVeiculos / numCidades);
    
    if (numCidadesRS > 0) {
        printf("Media de acidentes com vitimas entre as cidades do Rio Grande do Sul: %.2f\n", (float)totalAcidentesRS / numCidadesRS);
    } else {
        printf("Nenhuma cidade do Rio Grande do Sul registrada.\n");
    }
    
    return 0;
}