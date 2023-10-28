#include <stdio.h>
int main()
{
    int n,i,m, pares, impares;
    scanf("%d", &n);
    pares=0;
    impares=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        if(m%2==0)
        {
            pares= pares+1;
        }
        else
        {
            impares = impares+1;
        }
    }
    printf("%d %d", pares, impares);
    return 0;
}
