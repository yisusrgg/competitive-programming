#include <stdio.h>
#include <string.h>
char nombres[1005][11];
int posiciones[1005];
int m, n;

int main() {
    scanf("%d %d", &m, &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", nombres[i]);
        posiciones[i] = i + 1;
    }
    int c;
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        char tipo;
        char nombre[11];
        scanf(" %c", &tipo);
        if (tipo == 'T') {
            for (int j = 0; j < n; j++) {
                posiciones[j] = (posiciones[j] % m) + 1;
            }
        } else {
            scanf("%s", nombre);
            int k;
            for (k = 0; k < n; k++) {
                if (strcmp(nombres[k], nombre) == 0) {
                    printf("%d\n", posiciones[k]);
                    break;
                }
            }
        }
    }
    return 0;
}
