#include <stdio.h>
int cubeta[110];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        cubeta[x]++;
    }
    for(int i=0; i<10; i++)
    {
        if(cubeta[i]>0)
        {
            printf("i:%d %d\n",i,cubeta[i]);
        }
    }



    return 0;
}
