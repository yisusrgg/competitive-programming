#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a<=b && b<=c && a<c)
    {
        printf("C");
    }
    else if(a>=b && b>=c && c<a)
    {
        printf("D");
    }
    else if(a==b && b==c)
    {
        printf("I");
    }
    else
    {
        printf("X");
    }
    return 0;
}
