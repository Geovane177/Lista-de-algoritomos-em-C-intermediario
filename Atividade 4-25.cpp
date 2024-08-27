#include <stdio.h>

// Função para converter um número decimal em binário
void decimalParaBinario(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    
    int binario[32];  // Array para armazenar o número binário (32 bits para inteiros)
    int i = 0;

    // Preencher o array com os dígitos binários
    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Imprimir o número binário em ordem correta
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main() {
    int numero;

    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    printf("Número binário: ");
    decimalParaBinario(numero);

    printf("\n");

    return 0;
}

