#include <stdio.h>

int encontrar_posicion_secuencia(int n) {
    char secuencia[1000000];
    int i = 1, j = 0;

    while (j < n) {
        int digitos = sprintf(secuencia + j, "%d", i);
        j += digitos;
        i++;
    }

    char numero[20];
    sprintf(numero, "%d", n);
    char* posicion = strstr(secuencia, numero);

    if (posicion != NULL) {
        return posicion - secuencia + 1;
    } else {
        return -1;
    }
}

int main() {
    int numero;

    printf("Ingrese el número N: ");
    scanf("%d", &numero);

    int posicion = encontrar_posicion_secuencia(numero);

    if (posicion != -1) {
        printf("El número %d aparece por primera vez en la posición %d de la secuencia.\n", numero, posicion);
    } else {
        printf("El número %d no aparece en la secuencia.\n", numero);
    }

    return 0;
}


