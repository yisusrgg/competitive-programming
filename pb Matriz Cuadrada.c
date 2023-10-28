#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int x;
    scanf("%d", &x);

    for(int i = 0; i < x; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a == 1) {
            printf("%d\n", b);
        } else {
            int ans = (a - 1) * m + b;
            printf("%d\n", ans);
        }
    }

    return 0;
}
