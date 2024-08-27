#include <stdio.h>
#include <ctype.h>  // Para a fun��o isdigit()
#include <string.h> // Para a fun��o strlen()

// Fun��o para converter uma string em um n�mero inteiro
int minhaAtoi(const char *str) {
    int resultado = 0;
    int sinal = 1;

    // Pular espa�os iniciais
    while (*str == ' ') {
        str++;
    }

    // Verificar o sinal
    if (*str == '-') {
        sinal = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // Converter os caracteres em n�mero
    while (*str != '\0' && isdigit((unsigned char)*str)) {
        resultado = resultado * 10 + (*str - '0');
        str++;
    }

    return sinal * resultado;
}

int main() {
    char str[100];  // Buffer para a string

    printf("Digite uma string representando um n�mero inteiro: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Erro ao ler a string.\n");
        return 1;
    }

    // Remove o caractere de nova linha que fgets pode adicionar
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Converter a string para um n�mero inteiro
    int numero = minhaAtoi(str);

    // Exibir o resultado
    printf("N�mero convertido: %d\n", numero);

    return 0;
}
