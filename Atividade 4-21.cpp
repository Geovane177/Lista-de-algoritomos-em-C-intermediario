#include <stdio.h>

// Função para realizar a busca linear
int buscaLinear(int arr[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == chave) {
            return i; // Retorna o índice do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int n, chave, resultado;

    // Solicita ao usuário que insira o tamanho do vetor
    printf("Digite o número de elementos no vetor: ");
    scanf("%d", &n);

    // Verifica se o tamanho é positivo
    if (n <= 0) {
        printf("O número de elementos deve ser positivo.\n");
        return 1; // Código de erro 1 para entrada inválida
    }

    int arr[n];

    // Solicita ao usuário que insira os elementos do vetor
    printf("Digite %d elementos:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Solicita ao usuário o valor a ser buscado
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &chave);

    // Realiza a busca linear
    resultado = buscaLinear(arr, n, chave);

    // Exibe o resultado da busca
    if (resultado != -1) {
        printf("O valor %d foi encontrado no índice %d.\n", chave, resultado);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", chave);
    }

    return 0; // Código de sucesso
}
