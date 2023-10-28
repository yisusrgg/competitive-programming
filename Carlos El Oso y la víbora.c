#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int contador=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i%2>0)
            {
                printf("#");
            }
            if(i%2==0 && contador%2==0)
            {
                for(j=1; j<=m-1; j++)
                {
                    printf(".");
                }
                printf("#");
                contador++;
            }
            else if(i%2==0 && contador%2>0)
            {
                contador++;
                printf("#");
                for(j=1; j<=m-1; j++)
                {
                    printf(".");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
