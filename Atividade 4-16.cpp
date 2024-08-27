#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verificaPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (!isalnum(str[inicio])) {
            inicio++;
        } else if (!isalnum(str[fim])) {
            fim--;
        } else {
           
            if (tolower(str[inicio]) != tolower(str[fim])) {
                return 0; 
            }
            inicio++;
            fim--;
        }
    }
    return 1; 
}

int main() {
    char str[100];

    printf("Digite uma palavra ou numero: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (verificaPalindromo(str)) {
        printf("'%s' e um palindromo.\n", str);
    } else {
        printf("'%s' nao e um palindromo.\n", str);
    }

    return 0;
}

