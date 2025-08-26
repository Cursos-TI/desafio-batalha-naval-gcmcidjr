#include <stdio.h>

#define TAM1 5   // Tabuleiro pequeno (nível novato)
#define TAM2 10  // Tabuleiro maior (nível aventureiro)

void exibirTabuleiro(int tabuleiro[TAM2][TAM2], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // NiVEL NOVATO
    int tabuleiro1[TAM1][TAM1] = {0};

    // Navio vertical (coluna 1)
    for (int i = 0; i < 3; i++) {
        tabuleiro1[i][1] = 3;
        printf("Navio vertical em (%d, %d)\n", i, 1);
    }

    // Navio horizontal (linha 4)
    for (int j = 2; j < 5; j++) {
        tabuleiro1[4][j] = 3;
        printf("Navio horizontal em (%d, %d)\n", 4, j);
    }

    printf("\nTabuleiro 5x5 (Nivel Novato):\n");
    exibirTabuleiro(tabuleiro1, TAM1);

    // NIVEL AVENTUREIRO
    int tabuleiro2[TAM2][TAM2] = {0};

    // Navio horizontal
    for (int j = 0; j < 4; j++) {
        tabuleiro2[2][j] = 3;
    }

    // Navio vertical
    for (int i = 5; i < 9; i++) {
        tabuleiro2[i][7] = 3;
    }

    // Navio diagonal principal
    for (int i = 0; i < 5; i++) {
        tabuleiro2[i][i] = 3;
    }

    // Navio diagonal secundária
    for (int i = 0; i < 5; i++) {
        tabuleiro2[i][9 - i] = 3;
    }

    printf("Tabuleiro 10x10 (Nivel Aventureiro):\n");
    exibirTabuleiro(tabuleiro2, TAM2);

    // NIVEL MESTRE
    int habilidade[5][5] = {0};

    printf("Habilidade em Cone:\n");
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Habilidade em Octaedro:\n");
    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Habilidade em Cruz:\n");
    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
