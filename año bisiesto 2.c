#include <stdio.h>
int main ()
{
    int a;
    scanf("%d", &a);

    if (a%4==0)
    {
        if(a%400>=1 && a%100==0)
        {
            printf("NO ES BISIESTO");
        }
        else if(a%400==0 && a%100==0 && a%4==0)
        {
            printf("ES BISIESTO");
        }
        else
        {
            printf("ES BISIESTO");
        }
    }
    else
    {
        printf("NO ES BISIESTO");
    }
    return 0;
}
