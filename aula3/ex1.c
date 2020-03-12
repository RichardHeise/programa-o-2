#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main () {
    FILE* entrada;

    entrada = fopen("arq.txt", "w");
    if (!entrada) exit(1);

    fputs("O rato roeu a roupa do rei de roma", entrada);

    freopen("arq.txt", "r+", entrada);
    if (! entrada) exit(1);

    int i;
    for (i = -1; ! feof(entrada); i++) {
        fgetc(entrada);
    }
    printf("%d\n", i);

    fclose(entrada);

    exit(0);

}