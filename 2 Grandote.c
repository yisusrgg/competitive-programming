#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    long long suma = 0;
    for(int i=0; i<=n; i++)
    {
        suma+=(n)/(pow(2,i));
    }
    printf("%lld", suma);
    return 0;
}
