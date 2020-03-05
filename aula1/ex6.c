#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char entrada[100];
    scanf("%s", entrada);
    int i, aux, tam;

    tam = strlen(entrada);

    for (i = 0; i < tam; i++) {

        if (entrada[i] == entrada[i+1]) {

            for (aux = i; aux <= (tam - i)+1; aux++) {
                entrada[aux] = entrada[aux + 1];
            }

            i -= 1;
            tam -= 1;
        }
    }

    printf("Saída: %s\n", entrada); 

    return 1;
}
