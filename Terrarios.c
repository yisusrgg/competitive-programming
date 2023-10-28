#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    double volumen;
    scanf("%d", &a);
    volumen= ((15 + 7 * sqrt(5)) * (pow(a,3))) / (4);
    printf("%.2lf", volumen);
    return 0;
}
