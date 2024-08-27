#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int n1, n2, cont;
	
	srand(time(NULL));
	
	n1 = (rand() % 10) + 1;
	
	
	printf("Digite um numero aleatorio entre 1 e 10: ");
	scanf("%i", &n2);
	if(n1>10){
		n1 = 10;
	}
	
	if(n1==n2){
		printf("PARABENSSS, voce acertou");
		
	}else{
		printf("Que pena, voce errou o numero era: %i", n1);
	}


}

