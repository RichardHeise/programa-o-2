#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char entrada[100];
    int i;

    scanf("%s", entrada);

    for (i = 0; i < strlen(entrada); i++) {
        if (entrada[i] != ' ' ||
           (entrada[i] >= 'A' && entrada[i] <= "Z") ||
           (entrada[i] >= 'a' && entrada[i] <= "z") ||
           (entrada[i] >= '0' && entrada[i] <= "9")) {
               entrada[i]

        }
    }

    printf("Saída: %s\n", entrada);

    return 1;
}