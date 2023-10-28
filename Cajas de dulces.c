#include <stdio.h>
int arr[1010];
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mayor=0;
    for(int i=0; i<n; i++)
    {
        int reciente=0;
        for(int j=i; j<k; j++)
        {
            reciente+=arr[j];
        }
        if(reciente>mayor)
        {
            mayor=reciente;
        }
        k++;

    }
    printf("%d", mayor);
    return 0;
}
