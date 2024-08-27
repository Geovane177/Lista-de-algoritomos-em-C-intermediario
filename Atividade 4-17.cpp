int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);

    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    // Verifica se os números são positivos
    if (num1 <= 0 || num2 <= 0) {
        printf("Por favor, insira números positivos.\n");
        return 1; // Código de erro 1 para entrada inválida
    }

    // Calcula e exibe o MDC
    int resultado = mdc(num1, num2);
    printf("O Máximo Divisor Comum de %d e %d é %d.\n", num1, num2, resultado);

    return 0; // Código de sucesso
}
