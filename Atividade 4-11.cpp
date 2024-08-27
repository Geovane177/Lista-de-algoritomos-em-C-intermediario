#include <stdio.h>

int main(){
	
	int contador, num, primo;
	
	printf("digite um numero \n");
	scanf("%i", &num);
	
	for(contador = 2; contador <= num; contador++){
		if (num%contador==0){
			primo++;
			}
	}
	if (primo == 2){
		printf("esse numero e primo");
	}else{
		printf("esse numero nao e primo");
	}
	
}
