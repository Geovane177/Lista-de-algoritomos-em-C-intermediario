#include <stdio.h>

// Função para calcular o MDC usando o algoritmo de Euclides
int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Função para calcular o MMC usando o MDC
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int num1, num2;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Verifica se os números são positivos
    if (num1 <= 0 || num2 <= 0) {
        printf("Por favor, insira números positivos.\n");
        return 1; // Código de erro 1 para entrada inválida
    }

    // Calcula e exibe o MMC
    int resultado = mmc(num1, num2);
    printf("O Mínimo Múltiplo Comum de %d e %d é %d.\n", num1, num2, resultado);

    return 0; // Código de sucesso
}
