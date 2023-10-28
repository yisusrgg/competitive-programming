
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>> a>>b>> c;
    map <int,int> mp;
    for(int i=0; i<a.size(); i++)
    {
       mp[a[i]]++;
    }
    for(int i=0; i<b.size(); i++)
    {
       mp[b[i]]++;
    }
    for(int i = 0; i<c.size(); i++)
    {
       mp[c[i]]--;
    }

    for(int i = 'A'; i<='Z'; i++)
    {
       if(mp[i]!=0)
       {
         cout<<"NO";
         return 0;
       }
    }
    cout<<"YES";
}
