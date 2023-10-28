#include <stdio.h>
int main()
{
    int n;
    int cont=0;
    scanf("%d", &n);
    for(int i=n; i>0; i--)
    {
        cont= cont + n%10;
        n= n/10;
    }
    printf("%d", cont);
    return 0;
}
