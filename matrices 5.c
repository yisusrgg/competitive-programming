#include <stdio.h>
int mat[105][105];
int cop[105][105];
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
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
             cop[i][j] = mat[i][m-1-j];
         }
     }
     printf("\n");
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
