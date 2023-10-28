#include <stdio.h>
#include <stdbool.h>
int arr[1010];
int main()
{
    int n;
    scanf("%d", &n);
    bool p= true;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[n-1])
        {
            p = false;
            break;
        }
        n--;
    }
    if(p==true)
        {
            printf("SI");
        }
        else
        {
            printf("NO");
        }
    return 0;
}

