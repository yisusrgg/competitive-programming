#include <stdio.h>
int derecha[100005];
int izquierda[100005];
int main()
{
    int n;
    scanf("%d", &n);
    long long cont1 = 0;
    long long cont2 = 0;
    long long izq = 0;
    long long der = 0;
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d", &x);
        if(izq == der)
        {
            izq+=x;
            izquierda[i] = i;
            cont1++;
        }
        else if(izq < der)
        {
            izq+=x;
            izquierda[i] = i;
            cont1++;
        }
        else if(der < izq)
        {
            der+=x;
            derecha[i] = i;
            cont2++;
        }
    }
    printf("%d\n", cont1);
    for(int i = 1; i<=n; i++)
    {
        if(izquierda[i]>0)
        {
            printf("%d ", izquierda[i]);
        }
    }

    printf("\n%d\n", cont2);
    for(int i=1; i<=n; i++)
    {
        if(derecha[i] > 0)
        {
            printf("%d ", derecha[i]);
        }
    }
    return 0;
}
