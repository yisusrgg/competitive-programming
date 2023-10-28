#include <stdio.h>
int main()
{
    long long x,y;
    long long suma=0;
    scanf("%lld", &x);
    if(x>=2)
    {
    for(int i=1; i<=x; i++)
    {
        scanf("%lld", &y);
        suma+=y;
    }
    }
    suma= suma/365;
    printf("%lld", suma);
    return 0;
}
