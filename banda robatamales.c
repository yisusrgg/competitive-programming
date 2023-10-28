#include <stdio.h>

int main ()
{
    int T,B, lider, sobran, reparte;
    scanf("%d %d", &T, &B);

    lider = (T / 2) + (T%2);
    B = B - 1;
    sobran= T - lider;
    reparte= sobran / B;
    lider= lider + (sobran%B);

    printf("%d", lider);

    return 0;
}
