#include <stdio.h>
int main()
{
    bool x = 1;
    scanf("%d", &x);
    if(x<0 || x>0)
    {
        printf("verdadero");
    }
    else
    {
        printf("false");
    }


    return 0;
}
