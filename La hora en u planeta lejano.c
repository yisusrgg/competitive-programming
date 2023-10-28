#include <stdio.h>

int main()
{
    int S, s, m, h, d;
    scanf("%d", &S);

    s = S % 50;
    S = S / 50;
    m = S % 70;
    S = S / 70;
    h = S % 12;
    S = S / 12;
    d = S;

    printf("%d %d %d %d", d, h, m, s);

    return 0;
}
