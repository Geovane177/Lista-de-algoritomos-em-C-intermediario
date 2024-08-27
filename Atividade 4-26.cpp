#include <stdio.h>

#define MAX 10  // Define o tamanho máximo das matrizes

// Função para ler uma matriz
void lerMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para somar duas matrizes
void somarMatrizes(int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas e colunas das matrizes: ");
    scanf("%d %d", &linhas, &colunas);

    if (linhas > MAX || colunas > MAX) {
        printf("O tamanho máximo suportado é %d x %d.\n", MAX, MAX);
        return 1;
    }

    int matriz1[MAX][MAX], matriz2[MAX][MAX], resultado[MAX][MAX];

    printf("Digite os elementos da primeira matriz:\n");
    lerMatriz(matriz1, linhas, colunas);

    printf("Digite os elementos da segunda matriz:\n");
    lerMatriz(matriz2, linhas, colunas);

    somarMatrizes(matriz1, matriz2, resultado, linhas, colunas);

    printf("Matriz 1:\n");
    imprimirMatriz(matriz1, linhas, colunas);

    printf("Matriz 2:\n");
    imprimirMatriz(matriz2, linhas, colunas);

    printf("Resultado da soma das matrizes:\n");
    imprimirMatriz(resultado, linhas, colunas);

    return 0;
}

