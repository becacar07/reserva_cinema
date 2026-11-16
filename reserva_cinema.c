
#include <stdio.h>

int main() {
    int assentos[3][5];
    float precos[3];
    int opcao;
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            assentos[i][j] = 0;
        }
    }
    /* Leitura dos precos (for percorrendo o vetor de precos) */
    printf("=== CADASTRO DOS PRECOS DOS INGRESSOS ===\n");
    for (i = 0; i < 3; i++) {
        do {
            printf("Digite o preco do ingresso da sessao %d: R$ ", i + 1);
            scanf("%f", &precos[i]);
            if (precos[i] <= 0) {
                printf("Preco invalido! O preco deve ser maior que zero.\n");
            }
        } while (precos[i] <= 0);
    }
    return 0;
}
