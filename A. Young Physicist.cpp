#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    map <int,int> mp;
    for(int i=0; i<n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        mp[0]+=a;
        mp[1]+=b;
        mp[2]+=c;
    }
    if(mp[0]==0 && mp[1]==0 && mp[2]==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}

