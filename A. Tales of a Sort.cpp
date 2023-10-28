#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long cont = 0;
        bool ord = false;

        while (!ord) {
            ord = true;
            for (int i = 1; i < n; i++) {
                if (arr[i] < arr[i - 1]) {
                    ord = false;
                    break;
                }
            }

            if (!ord) {
                for (int i = 0; i < n; i++) {
                    arr[i] = max(0LL, arr[i] - 1);
                }
                cont++;
            }
        }

        cout << cont << endl;
    }

    return 0;
}
