#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int cont=1;
    int cont1=x;
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=cont1; j++)
        {
            printf(" ");
        }
        for(int h=1; h<=cont; h++)
        {
            printf("*");
        }
        printf("\n");
        cont= cont+2;
        cont1--;
    }
    return 0;
}
