#include <stdio.h>
#include <stdbool.h>
int arr[110];
int arr1[110];
int main()
{
    int n;
    scanf("%d", &n);
    bool p = true;
    for(int i= 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i= 0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr1[i])
        {
            p= false;
            break;
        }
    }
    if(p==true)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
