#include <stdio.h>
void escalera(long long n, long long a,  long long b)
{
    int bandera=1;
    if(bandera == 1 && (n==1 || n==121 || n==12321 || n==1234321 || n==123454321))
    {
        printf("es escalera inicialmente");
        bandera=0;
    }
    long long calculo1= (n-a) / (b+1);
    if(bandera==1 && (calculo1==1 || calculo1==121 || calculo1==12321 || calculo1==1234321 || calculo1==123454321))
    {
        printf("es escalera despues del primer intento");
        bandera=0;
    }
    long long calculo2 = calculo1 - (a+b) + 1;
    if(bandera == 1 && (calculo2==1 || calculo2==121 || calculo2==12321 || calculo2==1234321 || calculo2==123454321))
    {
        printf("es escalera despues del segundo intento");
    }
    else if(bandera==1)
    {
        printf("nos rendimos");
    }
}
int main()
{
    long long n, a,b;
    scanf("%lld %lld %lld", &n, &a,&b);
    escalera(n,a,b);
    return 0;
}
