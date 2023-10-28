#include <stdio.h>
int arr[1010];
int main()
{
    int n;
    scanf("%d", &n);
    int cont=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<=1010; i++)
    {
        if(i!=n-1)
        {
            i= i+(arr[i]);
            cont++;
            i--;
        }
        else
        {
            break;
        }
    }
    printf("%d", cont);
    return 0;
}
