#include  <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    map <string, int> mp;
    for(int i=0; i<n; i++)
    {
        string x; cin>>x;
        if(mp[x]==0)
        {
            cout<<"OK"<<endl;
            mp[x]++;
        }
        else{
            x+=to_string(mp[x]++);
            cout<<x<<endl;
        }
    }
    return 0;
}

