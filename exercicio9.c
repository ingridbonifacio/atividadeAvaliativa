#include <stdio.h>

//9. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

int main() {
    int candidato[4] = {0}; // Inicializa contagem de votos para cada candidato
    int votosNulos = 0;
    int votosEmBranco = 0;
    int codigoVoto;
    
    while (1) {
        printf("Digite o codigo do voto (0 para encerrar): ");
        scanf("%d", &codigoVoto);
        
        if (codigoVoto == 0) {
            break;
        }
        
        switch (codigoVoto) {
            case 1:
            case 2:
            case 3:
            case 4:
                candidato[codigoVoto - 1]++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosEmBranco++;
                break;
            default:
                printf("Codigo de voto invalido.\n");
        }
    }
    
    printf("Total de votos para cada candidato:\n");
    for (int i = 0; i < 4; i++) {
        printf("Candidato %d: %d votos\n", i + 1, candidato[i]);
    }
    
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosEmBranco);
    
    return 0;
}