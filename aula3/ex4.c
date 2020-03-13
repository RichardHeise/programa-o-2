#include <stdlib.h>
#include <stdio.h>

/*void** malloc_matrix(int lin, int col, int size) {
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
}*/


int main() {

    FILE* arqEntrada = fopen("mapa.txt", "r+");

    int linhas, colunas;
    fscanf(arqEntrada, "%d %d", &linhas, &colunas);

    char c;
    char matriz[linhas][colunas];

    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas;j++) {
            c = fgetc(arqEntrada);
            if (c == '\n') {
                c = fgetc(arqEntrada);
            }
            matriz[i][j] = c;
        }
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    fclose(arqEntrada);
    return 1;
}