#include <stdio.h>
int main()
{
    int x, y, z;
    int cont=0;
    scanf("%d %d", &x, &y);
    for(int i=1; i<=x; i++)
    {
        scanf("%d", &z);
        if(z==y)
        {
            cont++;
        }
    }
    printf("%d", cont);
    return 0;
}
