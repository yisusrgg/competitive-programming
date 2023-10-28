
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    while(n--)
    {
        int n; cin >>n;
        vector <int>v;

        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        vector<int> a = v;
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] != a[1])
            {
                cout << i + 1 << endl;
            }
        }

    }
    return 0;
}
