
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t; cin >>t;

    for(int i=0; i<t; i++)
    {
        long long cont=0;
        long long a,b,c;
        cin >>a>>b>>c;
        vector <long long> v;
        for(long long j=0; j<c; j++)
        {
            long long z; cin >>z;
            v.push_back(z);
        }
        sort(v.begin(),v.end());
        for(long long j=0; j<c; j++)
        {
            if(b+v[j]<=a)
            {
                b+=v[j];
            }
            else
            {
                cont+=(b-1);
                b=min(1+v[j],a);
            }
        }
        cont+=(b);
        cout<<cont<<endl;
    }
    return 0;
}
