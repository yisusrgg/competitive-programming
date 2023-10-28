#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=1; a<10; a++)
    {
        for(int b=a+1; b<10; b++)
        {
            for(int c=b+1; c<10;c++)
            {
                if( a + b + c== n)
                {
                    printf("%d + %d + %d = %d\n", a,b,c,n);
                }
            }
        }
    }


    return 0;
}
