
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, m; cin >>n;
        n *= 2;
        m = sqrt(n);

        if (m * (m + 1) <= n)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<m - 1<<endl;
        }
    }
    return 0;
}
