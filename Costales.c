#include <stdio.h>
int arrx[1010];
int arry[1010];
int main()
{
    int n, m;
    scanf("%d", &n);
    int cont = 0;
    for(int i =0 ; i<1010; i++)
    {
        arrx[i] = -1;
        arry[i]= -1;
    }
    for(int i= 0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        arrx[x] = x;
    }
    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        int y;
        scanf("%d", &y);
        arry[y] = y;

    }
    for(int i=0; i<1010; i++)
    {
       if(arry[i] != arrx[i] && arry[i]==-1)
       {
           arrx[i] = arry[i];
           cont++;
       }
    }
    printf("%d", cont);




    return 0;
}
