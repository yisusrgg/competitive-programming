#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int cont=1;
    for(int i=1; i<=x; i++)
    {
     if(cont<=x)
    {
        if(cont%3==0)
        {
            if(cont%7==0 && cont%3==0)
            {
                printf("FLIMFLAM\n");
                cont++;
                continue;
            }
            else if(cont%3==0)
            {
                printf("FLIM\n");
                cont++;
            }
        }
        if(cont%7==0)
        {
            printf("FLAM\n");
            cont++;
        }
        else if(!cont%3==0 || !cont%7==0)
        {
            printf("%d\n", cont);
            cont++;
        }
    }
    }
    return 0;
}
