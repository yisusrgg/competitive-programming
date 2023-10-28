#include <stdio.h>

int main() {
    int n, m, a, b;
    scanf("%d %d", &n, &m);

    a = n / m;
    b = n % m;

    if (b == 0)
    {
        printf("%d\n", a);
    }
    else
    {
        int gcd = 1;
        for (int i = 1; i <= b && i <= m; i++)
        {
            if (b % i == 0 && m % i == 0)
            {
                gcd = i;
            }
        }
        b /= gcd;
        m /= gcd;

        printf("%d*%d/%d\n", a, b, m);
    }

    return 0;
}
