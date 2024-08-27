#include <stdio.h>

int main(){
	int num, contador;
	int soma = 0;
	
	printf("digite um numero \n");
	scanf("%i", &num);
	
	for (contador = 0; contador <= num; contador++){
		soma += contador;
	}
	printf("%i", soma);
}
