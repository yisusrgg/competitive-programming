#include <stdio.h>
int main()
{
    int x, y;
    int mayor=0;
    scanf("%d", &x);
    for(int i=1; i<=x; i++)
    {
        scanf("%d", &y);
        if(y>mayor)
        {
            mayor = y;
        }
    }
    printf("%d", mayor);
    return 0;
}
