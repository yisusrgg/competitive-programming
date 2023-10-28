#include <stdio.h>
int mat[1005][1005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int cont=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cont += mat[j][i];
        }
        printf("%d ", cont);
        cont=0;
    }
    return 0;
}
