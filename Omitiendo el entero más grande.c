#include <stdio.h>
int arr[105];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maximo=0;
    int cont=0;

    for(int i=0; i<n; i++)
    {
        int actual=arr[i];
        if(actual>maximo)
        {
            maximo=actual;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]==maximo)
        {
            cont++;
        }
    }


    printf("%d\n", n-cont);
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==maximo)
        {
            continue;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}
