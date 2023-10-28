#include <stdio.h>
int arr[110];
int positivos[110];
int negativos[110];
int main()
{
    int n;
    int pos= 0;
    int neg=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>0)
        {
            pos++;
            int j= 0;
            positivos[j] = arr[i];
            j++;

        }
        else
        {
            neg++;
        }
    }

    return 0;
}
