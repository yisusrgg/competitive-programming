#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int recipiente=1;
    for(int i=1; i<=n; i++)
    {
        printf("dia %d: %d\n", n, recipiente);
        recipiente*=2;
    }
    return 0;
}
