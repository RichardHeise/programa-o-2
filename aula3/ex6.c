#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char **argv) {

    if (argc != 3) {
        printf("Erro. Número de parâmetros inválido\n");
        exit(1);
    }
    if (!argv[1]) {
        printf("Erro no primeiro parâmetro: arquivo origem nao existe.\n");
        exit(2);
    }

    if (!argv[2]) {
        printf("Erro no segundo parâmetro: arquivo destino nao existe.\n");
        exit(3);
    }

    FILE *arq1;

    arq1 = fopen(argv[1], "r+");
    if (!arq1) {
        printf("Erro ao abrir arquivo %s", argv[1]);
        exit(4);
    }

    char haysack[20];
    fscanf(arq1, "%s", haysack);
    
    printf("%s", haysack);
    while ( !feof(arq1) ) {
        if (strstr(haysack, argv[1])) {
            printf("%s\n", haysack);
        }
        fscanf(arq1, "%s", haysack);
    }

    fclose(arq1);

    return 0;
}