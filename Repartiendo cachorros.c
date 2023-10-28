#include <stdio.h>

int main()
{
    int C,P,H, sequeda;
    scanf("%d %d %d", &C, &P, &H);

    sequeda = P;
    C = C -P;

    sequeda = sequeda + C % (H+1);

    printf("%d", sequeda);

    return 0;
}
