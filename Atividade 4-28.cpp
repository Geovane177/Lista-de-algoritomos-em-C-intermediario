#include <stdio.h>

// Função para calcular o determinante de uma matriz 2x2
int calcularDeterminante2x2(int a, int b, int c, int d) {
    return (a * d) - (b * c);
}

int main() {
    int a, b, c, d;

    // Solicitar ao usuário os elementos da matriz
    printf("Digite os elementos da matriz 2x2:\n");
    printf("Elemento [0][0]: ");
    scanf("%d", &a);
    printf("Elemento [0][1]: ");
    scanf("%d", &b);
    printf("Elemento [1][0]: ");
    scanf("%d", &c);
    printf("Elemento [1][1]: ");
    scanf("%d", &d);

    // Calcular o determinante
    int determinante = calcularDeterminante2x2(a, b, c, d);

    // Exibir o resultado
    printf("O determinante da matriz 2x2 é: %d\n", determinante);

    return 0;
}

