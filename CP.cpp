#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long n; cin >> n;
    vector<int> v;
    for(long long i=0; i<n; i++)
    {
        long long a; cin >>a;
        v.push_back(a);
        if(a<menor)
        {
            menor = a;
        }
    }

    return 0;


}
