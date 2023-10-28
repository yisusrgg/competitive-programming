#include <stdio.h>
int main()
{
    int n,x,y;
    int i=0;
    scanf("%d", &n);
    while(i < n)
    {
        scanf("%d %d", &x, &y);
        printf("%d", x+y);
        i++;
    }
    return 0;
}
