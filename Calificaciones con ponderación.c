#include <stdio.h>
#include <math.h>

int main ()
{
    double E, T, A, C, R;
    scanf("%lf %lf %lf", &E, &T, &A);

    E = E * 60;
    E = E / 100;
    T = T * 30;
    T = T / 100;
    A = A * 10;
    A = A / 100;
    C = E + T + A;

    printf("%.0lf", round (C));

    return 0;
}
