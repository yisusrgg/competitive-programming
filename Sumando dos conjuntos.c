#include <stdio.h>
int arr[110];
int arr1[110];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        int suma = arr[i] + arr1[i];
        printf("%d ", suma);

    }

    return 0;
}
