#include<stdio.h>
int arr[5] = {1,2,3,4,5};
int main()
{
    int z,d;

    scanf("%d %d", &z, &d);
    int x,y;
    x = z % 5;
    y = d % 5;

    for(int i = 0; i<y; i++)
    {
        int aux = arr[4];
        int num = 4;
        for(int i = 0; i<4; i++)
        {
            arr[num] = arr[num-1];
            num--;
        }
        arr[0] = aux;
    }

    for(int i = 0; i<x; i++)
    {
        int aux = arr[0];
        int num = 0;
        for(int i = 0; i<4; i++)
        {
            arr[num] = arr[num+1];
            num++;
        }
        arr[4] = aux;
    }
    for(int i = 0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
