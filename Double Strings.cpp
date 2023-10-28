#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x; cin>>x;
    map <string, bool> mp;
    vector<string> v ;
    for(int i=0; i<x; i++)
    {
        string x; cin>>x;
        mp[x] = true;
        v.push_back(x);
    }
    for(int i=0; i<x; i++)
    {
        int a=v[i].size() , b=v[i].size();
        int tam = v[i].size();
        bool zy=0;
        for(int j=0; j<tam; j++)
        {
            string par1= v[i].substr(0,a);
            string par2= v[i].substr(a,b);
            if(mp[par1]==1 && mp[par2]==1)
            {
                cout<<1;
                zy=1;
                break;
            }
            a--;
        }
        if(zy==0)
        {
            cout<<0;
        }
    }
    cout<<endl;
}
int main()
{
    int n; cin>>n;
    while(n--)
    {
        solve();
    }
    return 0;
}
