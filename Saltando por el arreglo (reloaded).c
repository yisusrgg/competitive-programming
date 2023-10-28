#include <stdio.h>
int arr[1010];
int main ()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int salto = 0;
    int x = 0;
    int i = 0;
    while ( i!= n-1)
    {
        if(arr[0] == 0)
        {
            x = -1;
            break;
        }
        else if(arr[0] < 0)
        {
            x = -1;
            break;
        }
        else if(x>n-1)
        {
            x = -1;
            break;
        }

        salto += arr[i];
        i = salto;
        x++;

    }
    printf("%d", x);

    return 0;
}
