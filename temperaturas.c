#include <stdio.h>
int main ()
{
    int C, F, K, R;
    scanf("%d", &C);

    F = C * 1.8 + 32;
    K = C + 273.15;
    R = C * 4 / 5;

    printf("%d %d %d", K, F, R);
    return 0;
}
