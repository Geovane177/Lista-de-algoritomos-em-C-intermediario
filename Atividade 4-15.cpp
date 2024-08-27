#include <stdio.h>

int main() {
	int x, y, i, potencia;
	
	printf("Digite o valor: ");
	scanf("%d", &x);
	printf("Digite o valor para a potenciacao: ");
	scanf("%d", &y);

	i = 1;

	potencia = 1;

	while (i <= y) {
	potencia *= x;
	i++;
}

	printf("O valor da potencia  %d\n", potencia);

	return 0;

}
