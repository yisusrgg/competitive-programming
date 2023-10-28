#include <stdio.h>
int mat[205][205];
int cop[205][205];
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n+2; i++)
    {
        for(int j=0; j<m+2; j++)
        {
            mat[i][j] = -1;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {

            if(mat[i-1][j-1] == 1)
            {
                cop[i][j]++;
            }

            if(mat[i-1][j] == 1)
            {
                cop[i][j]++;
            }

            if(mat[i-1][j+1] == 1)
            {
                cop[i][j]++;
            }


            if(mat[i][j-1] == 1)
            {
                cop[i][j]++;
            }

            if(mat[i][j] == 1)
            {
                cop[i][j]++;
            }

            if(mat[i][j+1] == 1)
            {
                cop[i][j]++;
            }


            if(mat[i+1][j-1] == 1)
            {
                cop[i][j]++;
            }

            if(mat[i+1][j] == 1)
            {
                cop[i][j]++;
            }

            if(mat[i+1][j+1] == 1)
            {
                cop[i][j]++;
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            printf("%d ", cop[i][j]);
        }
        printf("\n");
    }
    return 0;
}
