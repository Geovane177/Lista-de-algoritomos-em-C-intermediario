#include <stdio.h>

int main(){
	
	int n, cod;
	
	printf("digite um numero: \n");
	scanf("%i", &n);
	
	if(n >= 0){
		do{
			cod = n % 10;
			printf("%i", cod);
			n /= 10;
		} while(n != 0);
			printf("\n");	
		}
	}

