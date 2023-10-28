#include <stdio.h>
#include <math.h>
int main ()
{
    double a,b,c,d,r1,r2,r;
    scanf("%lf%lf%lf", &a, &b, &c);
    d=(b*b) - (4 * a * c);
    if(d>0)
    {
        r1= (-(b) + sqrt(d)) / (2*a);
        r2= (-(b) - sqrt(d)) / (2*a);
        if(r1<r2)
        {
            printf("%lf\n%.1lf", r1, r2);
        }
        else if(r2<r1)
        {
            printf("%lf\n%.1lf", r2,r1);
        }
    }
    else if(d==0)
    {
        r= (-(b) + sqrt(d)) / (2*a);
        printf("%lf", r);
    }
    else
    {
        printf("NA");
    }
    return 0;
}
