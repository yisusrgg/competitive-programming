#include <stdio.h>
int arr[50005];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<50005; i++)
    {
        arr[i]=-1;
    }
    int cont=0;

    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        int y;
        scanf("%d", &y);

        if(arr[x]==-1)
        {
            arr[x] = y;
            cont++;

        }
        else if(arr[x]>-1)
        {
            if(y<arr[x])
            {
                arr[x] = y;
            }
        }
    }
    printf("%d\n", cont);
    for(int i=0; i<50005; i++)
    {
        if(arr[i]>-1)

        {

            printf("%d %d\n", i, arr[i]);
        }
    }
    return 0;
}
