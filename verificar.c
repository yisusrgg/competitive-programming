#include <stdio.h>
#include <string.h>

#define MAX_LEN 105

int main() {
    char s[MAX_LEN], x[4];
    while (1) {
        scanf("%s", s);
        if (s[0] == '0') break; // condición de salida
        scanf("%s", x);

        int freqS[26] = {0}, freqX[26] = {0}; // inicializa frecuencias en 0

        int lenS = strlen(s), lenX = strlen(x);
        for (int i = 0; i < lenS; i++) {
            freqS[s[i] - 'a']++; // incrementa la frecuencia de cada letra de s
        }
        for (int i = 0; i < lenX; i++) {
            freqX[x[i] - 'a']++; // incrementa la frecuencia de cada letra de x
        }

        int possible = 1; // asume que es posible formar x a partir de s
        for (int i = 0; i < 26; i++) {
            if (freqX[i] > freqS[i]) { // si la frecuencia de alguna letra de x es mayor que la de s, no es posible
                possible = 0;
                break;
            }
        }
        if (possible) {
            printf("POSIBLE\n");
        } else {
            printf("IMPOSIBLE\n");
        }
    }
    return 0;
}
