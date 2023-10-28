#include <stdio.h>

int main() {
    int n, m, cost[26];
    char bombs[100], detonators[100];

    // Leer la entrada de bombas mexicanas y detonadores colombianos
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &bombs[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf(" %c", &detonators[i]);
    }

    // Leer la entrada de costos
    for (int i = 0; i < 26; i++) {
        scanf("%d", &cost[i]);
    }

    // Calcular el costo total
    int total_cost = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (bombs[i] == detonators[j]) {
                total_cost += cost[bombs[i] - 'A'];
            }
        }
    }

    // Imprimir el costo total
    printf("%d\n", total_cost);

    return 0;
}
