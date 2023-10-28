#include <stdio.h>
int arr[110];
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
        for(int j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int aux= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= aux;
            }
        }
    }

    printf("%d\n%d\n%d\n", arr[n], arr[n-1], arr[n-2]);

    return 0;
}
