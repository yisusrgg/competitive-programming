
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t; cin>>t;
    map<int,int>mp;

    int a; cin >>a;
    for(int i=0; i<a; i++)
    {
        int z; cin>>z;
        mp[z] = 1;
    }

    int b; cin >>b;
    for(int i=0; i<b; i++)
    {
        int z; cin>>z;
        mp[z] = 1;
    }

    for(int i=1; i<=t; i++)
    {
        if(mp[i]==0)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}
