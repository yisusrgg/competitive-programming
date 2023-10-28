#include <stdio.h>
int main()
{
    int n,p;
    scanf("%d%d", &n,&p);
    if(n==1)
    {
        p=p%3;
        if(p==0)
        {
            printf("1 1");
        }
        if(p==1)
        {
            printf("3 2");
        }
        if(p==2)
        {
            printf("2 3");
        }
    }

    if(n==2)
    {
        p=p%3;
        if(p==0)
        {
            printf("2 2");
        }
        if(p==1)
        {
            printf("1 3");
        }
        if(p==2)
        {
            printf("3 1");
        }
    }

    if(n==3)
    {
        p=p%3;
        if(p==0)
        {
            printf("3 3");
        }
        if(p==1)
        {
            printf("2 1");
        }
        if(p==2)
        {
            printf("1 2");
        }
    }

    return 0;

}
