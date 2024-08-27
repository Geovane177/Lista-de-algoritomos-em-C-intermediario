#include <stdio.h>
#include <math.h>

// Função para converter um número binário para decimal
int binario_para_decimal(const char *binario) {
    int decimal = 0;
    int i = 0;
    int comprimento = 0;

    // Calcula o comprimento da string binária
    while (binario[comprimento] != '\0') {
        comprimento++;
    }

    // Converte o número binário para decimal
    for (i = 0; i < comprimento; i++) {
        if (binario[i] == '1') {
            decimal += pow(2, comprimento - i - 1);
        }
    }

    return decimal;
}

int main() {
    char binario[65];  // Buffer para armazenar o número binário (suportando até 64 bits)

    printf("Digite um número binário (apenas dígitos 0 e 1): ");
    scanf("%64s", binario);  // Lê a string binária do usuário (máximo de 64 caracteres)

    // Verifica se a entrada é um número binário válido
    for (int i = 0; binario[i] != '\0'; i++) {
        if (binario[i] != '0' && binario[i] != '1') {
            printf("Entrada inválida. Por favor, digite apenas dígitos 0 e 1.\n");
            return 1;
        }
    }

    int decimal = binario_para_decimal(binario);
    printf("Número decimal correspondente: %d\n", decimal);

    return 0;
}

