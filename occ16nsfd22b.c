#include <stdio.h>
int main()
{
    double x;
    double d = x * .15;
    scanf("%lf", &x);
    if(x>1000)
    {
        x = x - d;
        printf("%.0lf", x);
    }
    else
    {
        printf("%.0lf", x);
    }


    return 0;
}
