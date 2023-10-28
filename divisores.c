#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int contador=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            contador++;
        }
    }
    printf("%d", contador);

    return 0;
}
