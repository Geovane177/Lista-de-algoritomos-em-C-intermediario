#include <stdio.h>

// Função para ordenar o vetor usando o algoritmo Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // Últimos i elementos já estão na posição correta
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Função para imprimir o vetor
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

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

    // Ordena o vetor
    bubbleSort(arr, n);

    // Exibe o vetor ordenado
    printf("Vetor ordenado em ordem crescente:\n");
    printArray(arr, n);

    return 0; // Código de sucesso
}
