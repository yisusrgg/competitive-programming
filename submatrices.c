#include <stdio.h>
int mat1[1005][1005];
int mat2[1005][1005];
int cop[1005][1005];
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    int a,b;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    int bandera;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            bandera=1;
            for(int x=0; x<a; x++)
            {
                for(int y=0; y<b; y++)
                {
                    if(mat1[i+x][j+y]!=mat2[x][y])
                    {
                        bandera=0;
                        break;
                    }
                }
                if(bandera==0)
                {
                    break;
                }
            }
            if(bandera==1)
            {
                for(int x=0; x<a; x++)
                {
                    for(int y=0; y<b; y++)
                    {
                        cop[i+x][j+y]=1;
                    }
                }
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", cop[i][j]);
        }
        printf("\n");
    }

    return 0;
}
