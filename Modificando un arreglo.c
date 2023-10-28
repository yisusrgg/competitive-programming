#include <stdio.h>
int arr[110];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d", &x);
        arr[x]++;
    }
    for(int i=1; i<=m; i++)
    {
        printf("%d: %d\n", i, arr[i]);
    }

    return 0;
}
