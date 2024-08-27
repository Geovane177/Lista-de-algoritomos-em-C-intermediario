#include <stdio.h>
#include <math.h>

// Fun��o para converter um n�mero bin�rio para decimal
int binario_para_decimal(const char *binario) {
    int decimal = 0;
    int i = 0;
    int comprimento = 0;

    // Calcula o comprimento da string bin�ria
    while (binario[comprimento] != '\0') {
        comprimento++;
    }

    // Converte o n�mero bin�rio para decimal
    for (i = 0; i < comprimento; i++) {
        if (binario[i] == '1') {
            decimal += pow(2, comprimento - i - 1);
        }
    }

    return decimal;
}

int main() {
    char binario[65];  // Buffer para armazenar o n�mero bin�rio (suportando at� 64 bits)

    printf("Digite um n�mero bin�rio (apenas d�gitos 0 e 1): ");
    scanf("%64s", binario);  // L� a string bin�ria do usu�rio (m�ximo de 64 caracteres)

    // Verifica se a entrada � um n�mero bin�rio v�lido
    for (int i = 0; binario[i] != '\0'; i++) {
        if (binario[i] != '0' && binario[i] != '1') {
            printf("Entrada inv�lida. Por favor, digite apenas d�gitos 0 e 1.\n");
            return 1;
        }
    }

    int decimal = binario_para_decimal(binario);
    printf("N�mero decimal correspondente: %d\n", decimal);

    return 0;
}

