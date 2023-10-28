#include <stdio.h>
#include <math.h>
int main()
{
    long long x;
    scanf("%llf", &x);
    long long cont=0;
    long long suma=0;
    while(suma<=x)
    {
        cont++;
        suma= pow(2,cont);
    }
    cont--;
    printf("%llf", cont);
    return 0;
}
