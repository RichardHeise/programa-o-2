#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {

    FILE *arq1, arq2;

    if (!argv[1]) {
        printf("Erro, arquivo origem nao existe.\n");
        exit(1);
    }
    if (!argv[2]) {
        printf("Erro, arquivo destino nao existe.\n");
        exit(2);
    }
    if (!('a' >= argv[2][0] && argv[2][0] <= 'z')) {
        printf("Erro. Arquivos devem comecar com letras.\n");
        exit(3);
    }
    


    return 1;
}