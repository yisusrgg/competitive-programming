#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long n; cin >>n;
    for(int i=0; i<n; i++)
    {
        unsigned long long x; cin>>x;
        unsigned long long cont = 0;
        for(long long i=1; i<=x/2; i++)
        {
            cont+= (8*i)*i;
        }
        cout<<cont<<endl;
    }
    return 0;
}
