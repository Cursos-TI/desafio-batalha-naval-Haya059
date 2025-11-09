#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    // char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // int tabuleiro[10][10];
    // for (int i = 0; i < 10; ++i) {
    //     for (int j = 0; j < 10; ++j) {
    //         tabuleiro[i][j] = 0; // 0 = água
    //     }
    // }

    // // Posicionando navio horizontalmente
    // tabuleiro[2][3] = 3; // Navio horizontal na linha 3, colunas 4, 5, 6
    // tabuleiro[2][4] = 3;
    // tabuleiro[2][5] = 3; 

    // // Posicionando navio verticalmente
    // tabuleiro[5][6] = 3; // Navio vertical na coluna 7, linhas 6, 7, 8
    // tabuleiro[6][6] = 3;
    // tabuleiro[7][6] = 3;   

    // printf("JOGO DA BATALHA NAVAL \n");

    // printf("   ");
    // for (int j = 0; j < 10; ++j) {
    //     printf("%2d ", j + 1);
    // }
    // printf("\n");

    // // Exibe o tabuleiro com rótulos de linha A-J
    // for (int i = 0; i < 10; ++i) {
    //     printf(" %c ", linhas[i]);
    //     for (int j = 0; j < 10; ++j) {
    //         printf(" %d ", tabuleiro[i][j]);
    //     }
    //     printf("\n");
    // }
        
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

        char colunas[COLUNAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

        int tabuleiro[LINHAS][COLUNAS];

        for (int i = 0; i < LINHAS; i++) {
            for (int j = 0; j < COLUNAS; j++) {
                tabuleiro[i][j] = 0; // 0 = água
            }
        }

        // Posicionando navio horizontalmente
        tabuleiro[1][2] = 3; // Navio horizontal na linha 2, colunas 3, 4, 5
        tabuleiro[1][3] = 3;
        tabuleiro[1][4] = 3; 

        // Posicionando navio verticalmente
        tabuleiro[4][5] = 3; // Navio vertical na coluna 6, linhas 5, 6, 7
        tabuleiro[5][5] = 3;
        tabuleiro[6][5] = 3;

        // Posicionando navio diagonalmente (de cima para baixo)
        tabuleiro[7][7] = 3; // Navio diagonal começando na linha 8, coluna 8
        tabuleiro[8][8] = 3;
        tabuleiro[9][9] = 3;

        // Posicionando navio diagonalmente (de baixo para cima)
        tabuleiro[9][0] = 3; // Navio diagonal começando na linha 10, coluna 1
        tabuleiro[8][1] = 3;
        tabuleiro[7][2] = 3;

        printf("JOGO DA BATALHA NAVAL \n");
        
        // Cabeçalho das colunas com letras A..J
        printf("   ");
        for (int j = 0; j < COLUNAS; j++) {
            printf(" %c ", colunas[j]);
        }
        printf("\n");
            
        // Exibe o tabuleiro com números (1..10) nas linhas
        for (int i = 0; i < LINHAS; i++) {
            printf("%2d ", i + 1);          // números à esquerda
            for (int j = 0; j < COLUNAS; j++) {
                printf(" %d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
