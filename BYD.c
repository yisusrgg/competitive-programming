#include <stdio.h>

char bombas[1001];
char detonadores[1001];
int costos[26];

int main() {
    int n, m, costo_total = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf(" %c", &bombas[i]);
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf(" %c", &detonadores[i]);
    }
    for(int i = 0; i < 26; i++) {
        scanf("%d", &costos[i]);
    }

    for(int i = 0; i < n; i++) {
        char tipo_bomba = bombas[i];
        for(int j = 0; j < m; j++) {
            if(tipo_bomba == detonadores[j]) {
                costo_total += costos[tipo_bomba-'A'];
                detonadores[j] = '0';
                break;
            }
        }
    }

    printf("%d\n", costo_total);

    return 0;
}
