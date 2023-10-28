#include <stdio.h>
int arr[1005];
int main()
{
    int x;
    scanf("%d", &x);
    int cont=0;
    for(int i=0; i<x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<x; i++)
    {
        if(arr[i]>arr[i+1])
        {
            cont++;
        }
    }
    printf("%d", cont);

    return 0;
}
