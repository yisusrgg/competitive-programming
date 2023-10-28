#include <stdio.h>
int mat[105][105];
void llenado(int c)
{
    for(int i=0; i<c; i++)
    {
        int x,y;
        scanf("%d %d", &x, &y);
        mat[x][y] = 1;
    }
}
int verificar(int a, int b, int c)
{
    llenado(c);
    int cont=0;
    for(int i=1; i<=a-1; i++)
    {
        for(int j=1; j<=b-1; j++)
        {
            if(mat[i][j]==0 && mat[i][j+1]==0 && mat[i+1][j]==0 && mat[i+1][j+1]==0)
            {
                cont++;
            }
        }
    }
    return cont;
}
int main()
{
    int l,a,c;
    scanf("%d %d %d", &l,&a, &c);
    printf("%d", verificar(l,a,c));
    return 0;
}
