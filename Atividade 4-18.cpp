#include <stdio.h>

// Fun��o para calcular o MDC usando o algoritmo de Euclides
int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Fun��o para calcular o MMC usando o MDC
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int num1, num2;

    // Solicita ao usu�rio que insira dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    // Verifica se os n�meros s�o positivos
    if (num1 <= 0 || num2 <= 0) {
        printf("Por favor, insira n�meros positivos.\n");
        return 1; // C�digo de erro 1 para entrada inv�lida
    }

    // Calcula e exibe o MMC
    int resultado = mmc(num1, num2);
    printf("O M�nimo M�ltiplo Comum de %d e %d � %d.\n", num1, num2, resultado);

    return 0; // C�digo de sucesso
}
