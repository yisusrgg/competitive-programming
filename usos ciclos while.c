#include <stdio.h>
int main()
{
    bool esbiciesto = false;
    int x;
    scanf("%d", &x);
    while(esbiciesto = false)
    {
        if((x%4==0 && x%100==0) || (x%4==0 && x%400==0))
        {
            esbiciesto = true;
        }
    }
    printf("%d", esbiciesto);
    return 0;
}
