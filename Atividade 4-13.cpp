#include <stdio.h>


int main(){
	int n1, n2, n3 = 0, n4 = 1, cont;
	
	printf("digite um numero: \n");
	scanf("%i", &n1);
	printf("%i \n%i \n", n3, n4);
	for (cont = 1; cont <= n1; cont++){
		n2 = n3 + n4;
		n3 = n4;
		n4 = n2;
		printf("%i \n", n2);
	}
	return 0;
}
