#include <stdio.h>
int mat [23][23];
int cop [23][23];
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            cop[i][j] = mat[a-1-j][i];
        }
    }

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            printf("%d ", cop[i][j]);
        }
        printf("\n");
    }
    return 0;
}
