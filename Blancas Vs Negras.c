#include <stdio.h>
int mat[105][105];
int main()
{
    int n,m;
    int impar = 0;
    int par = 0;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &mat[i][j]);
            if(mat[i][j]%2==0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
    }
    int x,y;
    scanf("%d %d", &x, &y);
    int bandera=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mat[i][j]==x || mat[i][j]==y)
            {
                bandera++;
            }
        }
    }

    printf("%d %d\n", par, impar);
    if(bandera<2)
    {
        printf("JAQUE MATE");
    }
    else
    {
        printf("NO JAQUE");
    }
    return 0;
}
