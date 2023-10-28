#include <stdio.h>
int main()
{
    int x,y,a,b;
    scanf("%d %d %d %d", &x, &y, &a, &b);
    for(x; x<=y; x++)
    {
        if(x%a==0 && x%b==0)
        {
            printf("FizzBuzz");
            printf("\n");
        }
        else if(x%a==0 && !x%b==0)
        {
            printf("Fizz");
            printf("\n");
        }
        else if(x%b==0 && !x%a==0)
        {
            printf("Buzz");
            printf("\n");
        }
        else
        {
            printf("%d", x);
            printf("\n");
        }
    }
    return 0;
}
