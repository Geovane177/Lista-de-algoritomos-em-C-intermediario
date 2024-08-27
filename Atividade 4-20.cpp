#include <stdio.h>

// Fun��o para ordenar o vetor usando o algoritmo Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // �ltimos i elementos j� est�o na posi��o correta
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

// Fun��o para imprimir o vetor
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Solicita ao usu�rio que insira o tamanho do vetor
    printf("Digite o n�mero de elementos no vetor: ");
    scanf("%d", &n);

    // Verifica se o tamanho � positivo
    if (n <= 0) {
        printf("O n�mero de elementos deve ser positivo.\n");
        return 1; // C�digo de erro 1 para entrada inv�lida
    }

    int arr[n];

    // Solicita ao usu�rio que insira os elementos do vetor
    printf("Digite %d elementos:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ordena o vetor
    bubbleSort(arr, n);

    // Exibe o vetor ordenado
    printf("Vetor ordenado em ordem crescente:\n");
    printArray(arr, n);

    return 0; // C�digo de sucesso
}
