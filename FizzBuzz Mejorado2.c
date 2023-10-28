#include <stdio.h>
int main()
{
    int x,y,a,b;
    scanf("%d %d %d %d", &x, &y, &a, &b);
    int cont=x;
    for(x ; x<=y; x++)
    {
    if(cont<=y)
    {
        if(cont%a==0)
        {
            if(cont%a==0 && cont%b==0)
            {
                printf("FizzBuzz\n");
                cont++;
                continue;
            }
            else if(cont%a==0)
            {
                printf("Fizz\n");
                cont++;
            }
        }
        if(cont%b==0)
        {
            printf("Buzz\n");
            cont++;
        }
        else if((!cont%a==0 || !cont%b==0) && cont<=y)
        {
            printf("%d\n", cont);
            cont++;
        }
    }
    }
    return 0;
}
