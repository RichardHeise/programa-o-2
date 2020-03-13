#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {

    FILE *arqEntrada, *arqDestino;
    arqEntrada = fopen("minusc.txt", "r+");
    arqDestino = fopen("maiusc.txt", "w");

    int i;
    char valor;
    fscanf(arqEntrada, "%c", &valor);

    for (i = 0; ! feof(arqEntrada); i++) {
        if (valor >= 'a' && valor <= 'z') {
            valor -= 32 ;
        }

        fputc(valor, arqDestino);
        fscanf(arqEntrada, "%c", &valor);
    }

    fclose(arqEntrada);
    fclose(arqDestino);

    return 1;
}