#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    long long r = pow((long long) a,pow((long long) b, (long long) c));
    printf("%lld", r);
    return 0;
}
