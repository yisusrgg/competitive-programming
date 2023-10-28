#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(a==b)
    {
        printf("24");
    }

    else if(a>b)
    {
        printf("%d", (24-a)+b);
    }

    else
    {
        printf("%d",b-a);
    }

    return 0;
}
