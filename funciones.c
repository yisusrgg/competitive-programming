#include <stdio.h>
#include <stdbool.h>
int divisores(int n)
{
    int cont=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cont++;
        }
    }
    return cont;
}
bool esPrimo(int n)
{
    int div = divisores(n);
    return(div==2);
}

int main()
{
    int n;
    scanf("%d", &n);
    if(esPrimo(n))
    {
        printf("SI");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
