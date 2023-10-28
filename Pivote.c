#include <stdio.h>

int main() {
    int n, puntaje[100005], maximo = 0, ganador;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &puntaje[i]);
        if (puntaje[i] > maximo) {
            maximo = puntaje[i];
            ganador = i + 1;
        }
    }
    printf("%d", ganador);
    return 0;
}
