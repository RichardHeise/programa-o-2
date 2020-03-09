#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void parse (unsigned char str[100]) {
    int i;
    unsigned char aux;
    i = 0;
    while (aux != '\0') {
        if (str[i] >= 192 && str[i] <= 197) {
            str[i] = 'A';
        } else if (str[i] >= 200 && str[i] <= 203) {
            str[i] = 'E';
        } else if (str[i] >= 204 && str[i] <= 207) {
            str[i] = 'I';
        } else if (str[i] >= 210 && str[i] <= 214) {
            str[i] = 'O';
        } else if (str[i] >= 217 && str[i] <= 220) {
            str[i] = 'U';
        } else if (str[i] >= 224 && str[i] <= 229) {
            str[i] = 'a';
        } else if (str[i] >= 232 && str[i] <= 235) {
            str[i] = 'e';
        } else if (str[i] >= 236 && str[i] <= 239) {
            str[i] = 'i';
        } else if (str[i] >= 242 && str[i] <= 246) {
            str[i] = 'o';
        } else if (str[i] >= 249 && str[i] <= 252) {
            str[i] = 'u'; 
        } else if (str[i] == 199) {
            str[i] = 'C';
        } else if (str[i] == 231) {
            str[i] = 'c';    
        }
        i += 1;
        aux = str[i];
    }
}

int main () {

    unsigned char entrada[100];
    
    setlocale(LC_CTYPE, "pt_BR.iso88591");

    scanf("%s", entrada);

    parse(entrada);

    printf("%s\n", entrada);

    return 1;
}