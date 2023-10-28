#include <stdio.h>
int main()
{
    long long x , y;
    scanf("%lld %lld", &x, &y);
    long long r1 = x+y;
    long long r2 = x-y;
    long long r3 = x/y;
    long long r4 = x*y;
    long long r5 = x%5;
    printf("%lld %lld %lld %lld %lld", r1, r2, r3, r4, r5);

    return 0;
}
