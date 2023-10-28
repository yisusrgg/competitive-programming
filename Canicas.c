#include <stdio.h>
int arr[1000005];
int main()
{
    int n,c;
    scanf("%d %d", &n, &c);
    for(int i=1; i<=c; i++)
    {
        int x;
        scanf("%d", &x);
        arr[x]++;
    }
    for(int i=1; i<=n; i++)
    {
        printf("%d\n", arr[i]);

    }

    return 0;
}
