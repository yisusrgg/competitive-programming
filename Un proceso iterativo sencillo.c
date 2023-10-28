#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; n<100; i++)
    {
        if(n%2==0)
        {
            n+=3;
        }
        else
        {
            n*=2;
        }
    }
    printf("%d", n);

    return 0;
}
