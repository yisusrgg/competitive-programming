#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x<0)
    {
        printf("Left");
    }
    else if(x>0)
    {
        printf("Right");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}
