#include <stdio.h>
int arr[110];
int main()
{
    int n,g;
    scanf("%d %d", &n, &g);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int aux;
    for(int i=0; i<g; i++)
    {
        aux= arr[n-1];
        int posicion= n-1;
        for(int i=0; i<n; i++)
        {
            arr[posicion] = arr[posicion-1];
            posicion--;
        }
        arr[0]=aux;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
