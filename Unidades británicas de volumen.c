#include <stdio.h>
int main()
{
    int galon, cuarta, pinta, taza, onza;
    int g1, c1, p1, t1, o1;
    scanf("%d %d %d %d %d", &g1, &c1, &p1, &t1, &o1);

    int g2, c2, p2, t2, o2;


    taza = o1 / 8;
    pinta = t1 / 2;
    cuarta = p1 / 2;
    galon = c1 / 4;

    o2 = o1 % 8;
    t2 = t1 + taza;
    p2 = p1 + pinta;
    c2 = c1 + cuarta;
    g2 = g1 + galon;




    printf("%d %d %d %d %d", g2, c2, p2, t2, o2);








    return 0;
}
