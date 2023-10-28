#include <stdio.h>
int arr[10005];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maximo=-10005;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            int suma=0;
            for(int h=i; h<=j; h++)
            {
                suma+=arr[h];
            }
            if(suma>maximo)
            {
                maximo=suma;
            }
        }
    }
    printf("%d", maximo);
    return 0;
}
