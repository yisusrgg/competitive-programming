#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if(c>a && c<b)
    {
        printf("INTERVALO");
    }
    else if(c>a && c>b)
    {
        printf("DERECHA");
    }
    else if(c<a && c<b)
    {
        printf("IZQUIERDA");
    }
    else
    {
        printf("INTERVALO");
    }
    return 0;
}
