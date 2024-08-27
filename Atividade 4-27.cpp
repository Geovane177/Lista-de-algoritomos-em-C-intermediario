#include <stdio.h>

#define MAX 10  // Define o tamanho m�ximo das matrizes

// Fun��o para ler uma matriz
void lerMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Fun��o para imprimir uma matriz
void imprimirMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Fun��o para multiplicar duas matrizes
void multiplicarMatrizes(int matriz1[MAX][MAX], int linhas1, int colunas1,
                         int matriz2[MAX][MAX], int linhas2, int colunas2,
                         int resultado[MAX][MAX]) {
    if (colunas1 != linhas2) {
        printf("N�o � poss�vel multiplicar as matrizes: o n�mero de colunas da primeira matriz deve ser igual ao n�mero de linhas da segunda matriz.\n");
        return;
    }

    // Inicializar a matriz resultado com zeros
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplica��o de matrizes
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    int linhas1, colunas1, linhas2, colunas2;

    printf("Digite o n�mero de linhas e colunas da primeira matriz: ");
    scanf("%d %d", &linhas1, &colunas1);

    printf("Digite o n�mero de linhas e colunas da segunda matriz: ");
    scanf("%d %d", &linhas2, &colunas2);

    if (linhas1 > MAX || colunas1 > MAX || linhas2 > MAX || colunas2 > MAX) {
        printf("O tamanho m�ximo suportado � %d x %d.\n", MAX, MAX);
        return 1;
    }

    if (colunas1 != linhas2) {
        printf("N�o � poss�vel multiplicar as matrizes: o n�mero de colunas da primeira matriz deve ser igual ao n�mero de linhas da segunda matriz.\n");
        return 1;
    }

    int matriz1[MAX][MAX], matriz2[MAX][MAX], resultado[MAX][MAX];

    printf("Digite os elementos da primeira matriz:\n");
    lerMatriz(matriz1, linhas1, colunas1);

    printf("Digite os elementos da segunda matriz:\n");
    lerMatriz(matriz2, linhas2, colunas2);

    multiplicarMatrizes(matriz1, linhas1, colunas1, matriz2, linhas2, colunas2, resultado);

    printf("Matriz 1:\n");
    imprimirMatriz(matriz1, linhas1, colunas1);

    printf("Matriz 2:\n");
    imprimirMatriz(matriz2, linhas2, colunas2);

    printf("Resultado da multiplica��o das matrizes:\n");
    imprimirMatriz(resultado, linhas1, colunas2);

    return 0;
}
