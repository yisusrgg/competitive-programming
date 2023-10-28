#include <stdio.h>
int arr[505];
int main()

{
    int n;
    scanf("%d", &n);
    int cachorro=0;
    int cont=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int A;
    scanf("%d", &A);
    for(int i=0; i<n; i++)
    {
        cachorro= cachorro+arr[i];
        if(cachorro==A)
        {
            cont++;
        }
    }
    printf("%d", cont);
    return 0;
}
