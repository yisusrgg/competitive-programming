#include <stdio.h>
int main ()
{
    long long s, m1, h1,d1;
    long long m, h, d, q;
    scanf("%lld", &s);

    m1 = s / 50;
    h1 = m1 / 70;
    d1 = h1 / 12;

    q = s % 50;
    m = m1 % 70;
    h = h1 % 12;
    d = d1 % 12;

    printf("%lld %lld %lld %lld ", d, h, m, q);


    return 0;
}
