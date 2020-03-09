#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    int i;

    printf("TABELA ASCII: ");
    for (i = 0; i < 126; i++) {
        if (i % 9 == 0) {
            printf("\n");
        }
        printf("%c ", i);
    }

    printf("\n");

    return 1;
}