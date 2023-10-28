#include <stdio.h>
#include <string.h>
char p[105];
char s[105];
int main()
{
    scanf("%s", p);
    scanf("%s", s);
    int j, i;
    int x = strlen(p);
    int y = strlen(s);
    int bandera1 = 0;
    int bandera2 = 0;

    for(i=0; i<=y-x; i++)
    {
        for(j=0; j<x; j++)
        {
            if(s[i+j]!=p[j])
            {
                break;
            }
        }
        if(j==x)
        {
            bandera1 = 1;
            break;
        }
    }
    for(i=0; i<=y-x; i++)
    {
        for(j=0; j<x; j++)
        {
            if(s[i+j]!=p[x-1-j])
            {
                break;
            }
        }
        if(j==x)
        {
            bandera2= 1;
            break;
        }
    }
    printf("%d %d", bandera1, bandera2);
    return 0;
}
