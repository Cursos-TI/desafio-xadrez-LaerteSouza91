#include <stdio.h>

int main() {
    int linhaAtual = 0, colunaAtual = 0;
    int novaLinha, novaColuna;
    int i, j;

    printf("=== Movimento da Torre no Xadrez (Tabuleiro 8x8) ===\n");
    printf("A torre começa na posição (0,0)\n");

    while (1) {
        // Mostrar o tabuleiro
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                if (i == linhaAtual && j == colunaAtual) {
                    printf(" T ");
                } else {
                    printf(" . ");
                }
            }
            printf("\n");
        }

        // Solicitar nova posição
        printf("\nDigite a nova posição da torre (linha coluna, de 0 a 7): ");
        scanf("%d %d", &novaLinha, &novaColuna);

        // Verificar limites do tabuleiro
        if (novaLinha < 0 || novaLinha > 7 || novaColuna < 0 || novaColuna > 7) {
            printf("Posição fora do tabuleiro. Encerrando...\n");
            break;
        }

        // Verificar se o movimento é válido para a torre
        if (novaLinha == linhaAtual || novaColuna == colunaAtual) {
            linhaAtual = novaLinha;
            colunaAtual = novaColuna;
        } else {
            printf("Movimento inválido para a torre! Tente novamente.\n");
        }

        printf("\n");
    }

    return 0;
}
