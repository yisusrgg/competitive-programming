#include <stdio.h>
int main()
{
    int n,p,x;
    int contador=0;
    scanf("%d %d", &n, &p);
    for(int i=1; i<=n ; i++)
    {
        scanf("%d", &x);
        if(p>x)
        {
            continue;
        }
        else if(p<x);
        {
            contador++;
        }
    }
    printf("%d", contador);
    return 0;
}
