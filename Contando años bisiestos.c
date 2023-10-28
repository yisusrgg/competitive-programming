#include <stdio.h>
void tablero(int x)
{
    char mat[8*x][8*x];
    for(int i=0; i<8*x; i++)
    {
        for(int j=0; j<8*x; j++)
        {
            if ((i / x) % 2 == (j / x) % 2)
            {
                mat[i][j] = 'X';
            }
            else
            {
                mat[i][j] = '0';
            }
        }
    }

    for(int i=0; i<8*x; i++)
    {
        for(int j=0; j<8*x; j++)
        {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    int x;
    scanf("%d", &x);
    tablero(x);
    return 0;
}
