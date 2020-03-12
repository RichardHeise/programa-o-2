#include <stdlib.h>
#include <stdio.h>

int main () {
    FILE *entrada;

    entrada = fopen("random.txt", "r+");
    if (!entrada) {
        perror("Erro ao abrir arquivo random.txt");
        exit(1);
    }

    int i;
    float soma = 0;
    float valor;
    fscanf(entrada, "%f", &valor);
    for (i = 0; !feof(entrada); i++) {
        soma += valor;
        fscanf(entrada, "%f", &valor);
    }

    printf("Quantidade de numeros: %d\nValor da soma: %f\n", i, soma);

    printf("MÉDIA: %f\n", (soma/i));

    exit(0);
}