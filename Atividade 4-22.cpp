#include <stdio.h>

// Fun��o para realizar a busca bin�ria
int busca_binaria(int vetor[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Verifica se o elemento no meio � o alvo
        if (vetor[meio] == alvo) {
            return meio; // Retorna o �ndice onde o alvo foi encontrado
        }

        // Se o alvo � maior, ignore a metade esquerda
        if (vetor[meio] < alvo) {
            inicio = meio + 1;
        }
        // Se o alvo � menor, ignore a metade direita
        else {
            fim = meio - 1;
        }
    }

    return -1; // Retorna -1 se o alvo n�o for encontrado
}

int main() {
    // Exemplo de vetor ordenado
    int vetor[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int alvo;
    
    printf("Digite o n�mero a ser encontrado: ");
    scanf("%d", &alvo);

    int resultado = busca_binaria(vetor, tamanho, alvo);

    if (resultado != -1) {
        printf("N�mero %d encontrado no �ndice %d.\n", alvo, resultado);
    } else {
        printf("N�mero %d n�o encontrado no vetor.\n", alvo);
    }

    return 0;
}

