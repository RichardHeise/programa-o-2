#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    int i;


    setlocale(LC_CTYPE, "pt_BR.iso88591");

    printf("TABELA ASCII: \n");
    for (i = 33; i < 126; i++) {
        if (i % 9 == 0) {
            printf("\n");
        }
        printf("%c ", i);
    }

    printf("\n");
    printf("\n");

    printf("TABELA ISO-8859-1: \n");
    for (i = 33; i < 126; i++) {
        if (i % 9 == 0) {
            printf("\n");
        }
        printf("%c ", i);
    }
    for (i = 160; i < 256; i++) {
        if (i % 9 == 0) {
            printf("\n");
        }
        printf("%c ", i);
    }

    printf("\n");

    return 1;
}
