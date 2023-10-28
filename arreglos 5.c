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

    int izq = 0;
    int der = n-1;

    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            printf("%d ", arr[izq]);
            izq++;
        }
        else
        {
            printf("%d ", arr[der]);
            der--;
        }
    }
    return 0;
}
