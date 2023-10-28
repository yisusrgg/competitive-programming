#include <stdio.h>
int arr1[110];
int arr2[110];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i] + arr2[i]);
    }
    return 0;
}
