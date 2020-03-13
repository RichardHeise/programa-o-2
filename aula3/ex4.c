#include <stdlib.h>
#include <stdio.h>

void** malloc_matrix(int lin, int col, int size) {
    void **mat;
    mat = malloc(lin * sizeof(void*));
    if (!mat) {
        printf("Falta de memória.");
        exit(2);
    }

    int i;
    for (i = 0; i < lin; i++) {
        mat[i] = malloc(col * size);
        if (!mat[i]) {
            printf("Falta de memória.");
            exit(2);
        }
    }

    return mat;
}


int main () {
    FILE *arq;

    arq = fopen("mapa.txt", "r+");
    if (!arq) {
        perror("Erro ao abrir arquivo random.txt");
        exit(1);
    }

    int linhas = 22, colunas = 40;
    printf("%d %d", linhas, colunas);
    char **matriz = (char**)malloc_matrix(linhas, colunas,sizeof(char));

    int i, j;
    char c;
    c = fgetc(arq);
    for (i = 0; i < linhas;i++) {
        for (j = 0; colunas; j++) {
            matriz[i][j] = c;
            c = fgetc(arq);
        }
    }

    for (i = 0; i < 22; i++) {
        for (j = 0; j < 40; j++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 1;
}