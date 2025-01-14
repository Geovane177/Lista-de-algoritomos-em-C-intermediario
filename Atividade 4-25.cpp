#include <stdio.h>

// Fun��o para converter um n�mero decimal em bin�rio
void decimalParaBinario(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    
    int binario[32];  // Array para armazenar o n�mero bin�rio (32 bits para inteiros)
    int i = 0;

    // Preencher o array com os d�gitos bin�rios
    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Imprimir o n�mero bin�rio em ordem correta
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main() {
    int numero;

    printf("Digite um n�mero decimal: ");
    scanf("%d", &numero);

    printf("N�mero bin�rio: ");
    decimalParaBinario(numero);

    printf("\n");

    return 0;
}

