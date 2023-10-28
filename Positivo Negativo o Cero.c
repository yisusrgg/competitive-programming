#include <stdio.h>
int main ()
{
    int N;
    scanf("%d", &N);

    if (N>0)
    {
        printf("POSITIVO");
    }
    else if(N==0)
    {
        printf("CERO");
    }
    else if (N<0)
    {
        printf("NEGATIVO");
    }
    return 0;
}
