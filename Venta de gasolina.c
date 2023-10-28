#include <stdio.h>
int arr[10];
int arr2[10];
int arr3[10];

void llenado(int arr2[], int L)
{
    for(int i=0; i<7; i++)
    {
        arr2[i] = L;
    }
}
int main()
{
    int L,N;
    scanf("%d %d", &L, &N);
    scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);
    llenado(arr2,L);
    for(int i=0; i<7; i++)
    {
        int resultado = N*arr[i];
        arr3[i] = arr2[i] - resultado;
        if(arr3[i]<0)
        {
            arr2[i+1] = arr2[i+1] + arr3[i];
        }
        else if(arr3[i]>0)
        {
            arr2[i+1] = arr2[i+1] + arr3[i];
        }
        printf("%d ", arr3[i]);
    }
    return 0;
}
