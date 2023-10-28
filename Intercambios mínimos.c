#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if(a<b && b<c)
    {
        printf("0");
    }
    else if ((a<b && a<c && b>c) || (a>b && a<c && b<c) || (a>b && a>c && b>c))
    {
        printf("1");
    }
    else if((a<b && a>c && b>c) || (a>b && b<c && b<c))
    {
        printf("2");
    }
    return 0;
}
