#include <stdio.h>
int main()
{
    int x;
    int cont=0;
    scanf("%d", &x);
    while(x%2==0 && x!=0)
    {
        cont++;
        x= x/2;
    }
    printf("%d", cont);
    return 0;
}
