#include <stdio.h>
int main()
{
    int n, p;
    scanf("%d%d", &n, &p);
    if(n==1)
    {
        if (p%2==0 && p>0)
        {
            printf("2 3");
        }
        else if(p%3==0)
        {
            printf("1 1");
        }
        else if(p==0)
        {
            printf("1 1");
        }
        else
        {
            printf("3 2");
        }
    }

    if(n==2)
    {
        if (p%2==0 && p>0)
        {
            printf("3 1");
        }
        else if(p%3==0)
        {
            printf("2 2");
        }
        else if(p==0)
        {
            printf("2 2");
        }
        else
        {
            printf("1 3");
        }
    }

    if(n==3)
    {
        if (p%2==0 && p>0)
        {
            printf("1 2");
        }
        else if(p%3==0)
        {
            printf("3 3");
        }
        else if(p==0)
        {
            printf("3 3");
        }
        else
        {
            printf("2 1");
        }
    }

    return 0;
}
