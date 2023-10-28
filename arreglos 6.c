#include <stdio.h>
int arr[107];
int main()
{
    int x;
    scanf("%d", &x);
    for(int i=0; i<x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int y;
    scanf("%d", &y);
    int cont=0;
    for(int i=0; i<x; i++)
    {
        if(arr[i] == y)
        {
            cont++;
        }
    }
    printf("%d", cont);

    return 0;
}
