#include <stdio.h>
int arr[102];
int main()
{
    int x;
    scanf("%d", &x);
    for(int i=0; i<x; i++)
    {
        int y;
        scanf("%d", &y);
        arr[y]++;
    }
    for(int i=0; i<101; i++)
    {
        if(arr[i]>0)
        {
            for(int j=0; j<arr[i]; j++)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
