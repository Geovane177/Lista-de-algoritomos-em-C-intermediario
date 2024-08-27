#include <stdio.h>
#include <ctype.h>  // Para a função tolower()
#include <string.h> // Para a função strlen()

// Função para contar o número de vogais em uma string
int contarVogais(const char *str) {
    int contador = 0;
    char c;

    while ((c = *str++) != '\0') {
        c = tolower(c);  // Convertendo para minúscula para simplificar a comparação
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    return contador;
}

int main() {
    char str[100];  // Buffer para a string

    printf("Digite uma string (max 99 caracteres): ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Erro ao ler a string.\n");
        return 1;
    }

    // Remove o caractere de nova linha que fgets pode adicionar
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Contar o número de vogais
    int totalVogais = contarVogais(str);

    // Exibir o resultado
    printf("Número de vogais na string: %d\n", totalVogais);

    return 0;
}
