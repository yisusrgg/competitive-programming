#include <stdio.h>
#include <stdbool.h>
bool pasa(int z, int m,int cont)
{
    if(cont+z<=m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n, m;
    scanf("%d %d", &n,&m);
    int cont=0;
    for(int i=0; i<n; i++)
    {
        int z;
        scanf("%d", &z);
        if(pasa(z,m,cont))
        {
            printf("pasa\n");
            cont+=z;
        }
        else
        {
            printf("espera\n");
        }
    }
    return 0;
}
