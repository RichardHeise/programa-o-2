#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main () {
    FILE* entrada;

    entrada = fopen("arq.txt", "r");
    if (!entrada) exit(1);

    int n;
    for (i = 0; ! feof(entrada); i++) {
        fget(entrada);
    }


}