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

    // Solicita ao usu�rio que insira dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%i", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%i", &num2);

    // Verifica se os n�meros s�o positivos
    if (num1 <= 0 || num2 <= 0) {
        printf("Por favor, insira n�meros positivos.\n");
        return 1; // C�digo de erro 1 para entrada inv�lida
    }

    // Calcula e exibe o MDC
    int resultado = mdc(num1, num2);
    printf("O M�ximo Divisor Comum de %d e %d � %d.\n", num1, num2, resultado);

    return 0; // C�digo de sucesso
}
