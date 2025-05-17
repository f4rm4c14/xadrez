#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    int i, j;
    
    // Inicializa o tabuleiro com zeros
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    printf("TABULEIRO DE BATALHA NAVAL\n");// Exibe os cabeçalhos das colunas
    printf("  ");
    for(j = 0; j < 10; j++) {
        printf(" %c", linha[j]);
    }
    printf("\n");

    // Exibe o tabuleiro com os números das linhas
    for(i = 0; i <= 10; i++) {
        printf("%2d", i +1 );
        for(j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
