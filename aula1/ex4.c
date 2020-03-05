#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort (char string[]) {
    int k, j;
    char aux;

    for (k = strlen(string) - 1; k > 0; k--) {

        for (j = 0; j < k; j++) {

            if (string[j] > string[j + 1]) {
                aux           = string[j];
                string[j]     = string[j + 1];
                string[j + 1] = aux;
            }
        }
    }
}


int main () {
    char entrada[100];
    scanf("%s", entrada);

    bubble_sort(entrada);

    printf("%s", entrada);

    return 1;
}

