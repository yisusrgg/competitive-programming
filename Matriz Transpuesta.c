#include <stdio.h>
int mat[1005][1005];
int cop[1005][1005];
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int cont=0;
    for(int i=0; i<m; i++)
    {
        int menor = 100000;
        for(int j=0; j<m; j++)
        {
            if(mat[j][i] < menor)
            {
                menor = mat[j][i];
            }
            cont++;
            if(cont==n)
            {
                printf("%d ", menor);
            }
        }
        cont=0;
    }
    return 0;
}
