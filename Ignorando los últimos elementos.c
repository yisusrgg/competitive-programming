#include <stdio.h>
int arr[1010];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);
    for(int i=0+k; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
