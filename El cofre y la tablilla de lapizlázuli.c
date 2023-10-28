#include <stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d%d%d%d", &a,&b,&c,&x,&y,&z);
    if((a<=x && b<=y && c<=z) || (a<=x && b<=z && c<=y) || (a<=y && b<=x && c<=z) || (a<=y && b<=z && c<=x) || (a<=z && b<=x && c<=y) || (a<=z && b<=y && c<=x))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
