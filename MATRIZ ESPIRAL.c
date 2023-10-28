#include <stdio.h>
int mat[105][105];
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<105; i++)
    {
        for(int j=0; j<105; j++)
        {
            mat[i][j] = -1;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            mat[i][j]=0;
        }
    }

    int cont = 1;
    int x = 1;
    int y = 1;
    int orientacion = 3;

    while(cont <= n*n)
    {
        mat[x][y] = cont;
        cont++;

        if(orientacion==1)
        {
            if(mat[x-1][y]!=0)
            {
                orientacion=3;
            }
        }
        else if(orientacion == 2)
        {
            if(mat[x+1][y]!=0)
            {
                orientacion = 4;
            }
        }
        else if(orientacion == 3)
        {
            if(mat[x][y+1]!=0)
            {
                orientacion = 2;
            }
        }
        else if(orientacion == 4)
        {
            if(mat[x][y-1]!=0)
            {
                orientacion = 1;
            }
        }

        if(orientacion==1)
        {
            x--;
        }
        else if(orientacion == 2)
        {
            x++;
        }
        else if(orientacion == 3)
        {
            y++;
        }
        else if(orientacion == 4)
        {
            y--;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
