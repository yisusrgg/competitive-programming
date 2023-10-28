#include <stdio.h>
int main()
{

    int L,M,l,m,w,j,v,s,d;
    scanf("%d %d %d %d %d %d %d %d %d", &L, &M, &l, &m, &w, &j, &v, &s, &d);

    int suma1, suma2, suma3, suma4, suma5, suma6, suma7;
    suma1 = M*l;
    suma1 = L-suma1;
    printf("%d", suma1);

    return 0;
}
