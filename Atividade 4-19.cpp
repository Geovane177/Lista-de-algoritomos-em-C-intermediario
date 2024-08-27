#include <stdio.h>

int main(){
	
	int n1, n2=0, cont;
	
	printf("Digite um numero: ");
	scanf("%i", &n1);
	
	for(cont=1; cont<n1; cont++){
		if(n1%cont == 0){
			n2 += cont;
		}
	}
	if(n1==n2){
	printf("%i e perfeito", n2);	
	}else{
		printf("%i nao e perfeito", n2);
	}
	
}
