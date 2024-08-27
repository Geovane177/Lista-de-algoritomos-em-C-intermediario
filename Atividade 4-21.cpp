#include <stdio.h>

// Fun��o para realizar a busca linear
int buscaLinear(int arr[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == chave) {
            return i; // Retorna o �ndice do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento n�o for encontrado
}

int main() {
    int n, chave, resultado;

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

    // Solicita ao usu�rio o valor a ser buscado
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &chave);

    // Realiza a busca linear
    resultado = buscaLinear(arr, n, chave);

    // Exibe o resultado da busca
    if (resultado != -1) {
        printf("O valor %d foi encontrado no �ndice %d.\n", chave, resultado);
    } else {
        printf("O valor %d n�o foi encontrado no vetor.\n", chave);
    }

    return 0; // C�digo de sucesso
}
