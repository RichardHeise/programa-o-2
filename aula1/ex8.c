#include <stdio.h>
#include <stdlib.h>

int busca (char ag[100], char pal[100]) {
    int i, j, ret;
    ret = 0;
    j = 0;

    if (!ag[0] || !pal[0]) {
        return -2;
    }

    for (i = 0; ag[i] != '\0'; i++) {
        if (ag[i] == pal[j]) {
            ret = i;
            j++;
        } else {
            if (j != 0) {
                i -= 1;
            }
            j = 0;
        }

        if (pal[j] == '\0') {
            return  (ret - j) + 1;
        }
    }

    return -1;
}

int main () {
    char agulha[100];
    char palheiro[100];
    int resultado;

    scanf("%s", agulha);
    scanf("%s", palheiro);

    resultado = busca(agulha, palheiro);

    if ( resultado >= 0) {
        printf("Agulha está no palheiro, índice: %d\n", resultado);
    } else if (resultado == -1) {
        printf("Agulha não está no palheiro\n");
    }
    
    return resultado; 
}