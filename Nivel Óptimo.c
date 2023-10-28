#include <stdio.h>
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("2 %d", a-b);
    }
    else if(a<b)
    {
        printf("1 %d", b-a);
    }
    else
    {
        printf("Nivel Optimo");
    }
    return 0;
}
