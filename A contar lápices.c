#include <stdio.h>
int main()
{
    int i,n,k,m,s;
    scanf("%d %d", &n,&k);
    s=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        if(m==k)
        {
            s=s+1;
        }
    }
    printf("%d", s);
    return 0;
}
