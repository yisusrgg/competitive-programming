#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int divisores = 0;
    for(int i=1; i<=n; i++)
    {
        if( n%i==0)
        {
            divisores++;
        }
    }
    printf("%d", divisores);
    return 0;
}
