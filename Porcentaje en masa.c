#include <stdio.h>
int main()
{
    double n, k;
    double m;
    scanf("%lf %lf", &n, &k);

    m = ((n) / (n + k)) * 100;
    printf("%.2lf%%", m);

    return 0;
}
