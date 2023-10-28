#include <stdio.h>
int main ()
{
    int x,n;
    int contador=0;
    scanf("%d", &x);
    for(int i=1; i<=7; i++)
    {
        scanf("%d", &n);
        if(n>x)
        {
            contador++;
        }
    }
    printf("%d", contador);
    return 0;
}
