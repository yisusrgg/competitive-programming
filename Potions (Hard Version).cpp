#include <bits/stdc++.h>
using namespace std;

long long arr[200005];

int main() {
    long long n;
    cin >> n;

    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }

    sort(arr, arr + n);

    long long cont = 0;
    long long cont2 = 0;

    for (int i = n - 1; i >= 0; i--) {
    cont += arr[i];
    if (cont >= 0) {
        cont2++;
    }
    else
    {
        break;
    }
    }

    cout << cont2;
    return 0;
}
