#include <stdio.h>
int main()
{
    int n,u,d;
    scanf("%d %d %d", &n, &u, &d);
    int cont= 0;
    int temp=0;
    while(cont<n)
    {
        cont+=u;
        temp++;
        if(cont<n)
        {
            cont-=d;
            temp++;
        }
    }
    printf("%d", temp);
    return 0;
}
