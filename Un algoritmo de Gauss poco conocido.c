#include <stdio.h>
void valor(int a)
{
    int b = (a/100)+1;
    int c = ((3*b)/4)-12;
    int e = (a%19)+1;
    int f = ((8*b+5)/25) - (5+c);
    int g = ((5*a)/4) - (c+10);
    int h = (11*e + 20 + f) % 30;
    if(h!=25)
    {
        if(h==24)
        {
            h++;
        }
    }
    if(e>11)
    {
        h++;
    }
    int i = 44-h;
    if(i<21)
    {
        i+=30;
    }
    int j= i+7 -((g+i)%7);

    int d,m;
    if(j<=31)
    {
        d=j;
        m=3;
        printf("%d %d", d,m);
    }
    else
    {
        d=j-31;
        m=4;
        printf("%d %d", d,m);
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    valor(a);
    return 0;
}
