#include <stdio.h>

int main() {
    int assentos[3][5];
    float precos[3];
    int opcao;
    int i, j;

    /* No inicio, todos os assentos estao livres (0) */
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

    /* Menu principal (do while) */
    do {
        printf("\n========== MENU ==========\n");
        printf("1 - Mostrar mapa de assentos\n");
        printf("2 - Reservar assento\n");
        printf("3 - Cancelar reserva\n");
        printf("4 - Mostrar resumo das sessoes\n");
        printf("0 - Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            /* OPCAO 1 - Mapa de assentos */
            printf("\n--- MAPA DE ASSENTOS ---\n");
            printf("Assento   ");
            for (j = 0; j < 5; j++) {
                printf("%d ", j + 1);
            }
            printf("\n");
            for (i = 0; i < 3; i++) {
                printf("Sessao %d  ", i + 1);
                for (j = 0; j < 5; j++) {
                    printf("%d ", assentos[i][j]);
                }
                printf("\n");
            }
            printf("Legenda: 0 = livre | 1 = reservado\n");

        } else if (opcao == 2) {
            /* PARTE 2 (amigo): reservar assento */
            printf("Opcao em construcao.\n");

        } else if (opcao == 3) {
            /* PARTE 2 (amigo): cancelar reserva */
            printf("Opcao em construcao.\n");

        } else if (opcao == 4) {
            /* PARTE 2 (amigo): resumo das sessoes */
            printf("Opcao em construcao.\n");

        } else if (opcao == 0) {
            printf("\nEncerrando o programa. Ate logo!\n");

        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}