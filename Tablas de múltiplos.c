#include <stdio.h>

int main()
{

    int A, B, N, T=0, M=0;

    scanf("%d %d %d", &A, &B, &N);

    for(int x=1; x<=N; x++)
    {
        if(x%A==0 || x%B==0)
        {
            T=T+1;
            M=x;
        }
    }
    printf("%d %d", T, M);

    return 0;
}
