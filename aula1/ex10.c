#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo (char str[100]) {
    int i, tam;

    tam = strlen(str) - 1;
    for(i = 0; i < tam && str[i] == str[tam - i]; ++i);

    if (i >= tam) {
        return 1;
    }

    return 0;
}

void parse (char str[100]) {
    int i, j;

    j = 0;
    for (i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= '0' && str[i] <= '9')) {
                str[j] = str[i];
                j++;
        }
    }
    str[j] = '\0';

    for (i = 0; i < strlen(str); i++) {     
        if (str[i] >= 'a' && str[i] <= 'z') 
        str[i] -= 32 ;
    }
}

int main () {
    char entrada[100];

    scanf("%50[^\n]", entrada);

    parse(entrada);

    if (palindromo(entrada)) {
        printf("É palíndromo\n");
    } else {
        printf("Não é palíndromo\n");
    }

    return 1;
}
