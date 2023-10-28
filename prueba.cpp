
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(5, 0); // Initialize vector with 5 elements, all initialized to 0

    int cont = 0;

    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        v[z]++;
    }

    // Handle groups of 4 directly
    cont += v[4];

    // Handle groups of 3 with groups of 1
    while (v[3] > 0 && v[1] > 0) {
        v[3]--;
        v[1]--;
        cont++;
    }

    // Handle groups of 2 with groups of 2
    while (v[2] > 1) {
        v[2] -= 2;
        cont++;
    }

    // Handle groups of 2 with groups of 1
    while (v[2] > 0 && v[1] > 1) {
        v[2]--;
        v[1] -= 2;
        cont++;
    }

    // Handle remaining groups of 1
    while (v[1] > 3) {
        v[1] -= 4;
        cont++;
    }

    // Add remaining groups to the count
    cont += v[1] + v[2] + v[3];

    cout << cont;

    return 0;
}
