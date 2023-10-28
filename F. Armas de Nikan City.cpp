#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    map<string, int> maxpoder;

    for (int i = 0; i < n; i++) {
        string nombre;
        int poder;
        cin >> nombre >> poder;

        mp[nombre]++;
        maxpoder[nombre] = max(maxpoder[nombre], poder);
    }

    int p;
    cin >> p;

    while (p--) {
        string prefijo;
        cin >> prefijo;

        int cont = 0;
        int maxP = 0;

        for (auto it : mp) {
            if (it.first.find(prefijo) == 0) {
                cont++;
                maxP = max(maxP, maxpoder[it.first]);
            }
        }
        cout << cont << " " << maxP << endl;
    }
    return 0;
}
