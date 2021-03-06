#include <stdlib.h>
#include <stdio.h>

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

    if (!(argv[2][0] >= 'a' && argv[2][0] <= 'z') || (argv[2][0] >= 'A' && argv[2][0] <= 'Z')) {
        printf("Erro no segundo parâmetro: Arquivos devem comecar com letras.\n");
        exit(4);
    }

    FILE *arq1, *arq2;

    arq1 = fopen(argv[1], "r+");
    if (!arq1) {
        printf("Erro ao abrir arquivo %s", argv[1]);
        exit(4);
    }

    arq2 = fopen (argv[2], "w+");
    if (!arq2) {
        printf("Erro ao abrir arquivo %s", argv[2]);
        exit(4);
    }

    char palavra[50];
    fscanf(arq1, "%s ", palavra);
    while ( ! feof(arq1) ) {
        fputs(palavra, arq2);
        fputs(" ", arq2);
        fscanf(arq1, "%s", palavra);
    }

    fclose(arq1);
    fclose(arq2);


    return 1;
}