#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char entrada[100];
    scanf("%s", entrada);
    int i;
    for (i = 0; i < strlen (entrada); i++) {     
        if (entrada[i] >= 'a' && entrada[i] <= 'z') 
        entrada[i] -= 32 ;
    }

    printf("%s", entrada);
    printf("\n");
    return 1;
}
