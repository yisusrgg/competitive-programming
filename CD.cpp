#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n, m; cin>>n>>m;
    while(n!=0 && m!=0)
    {
        int cont=0;
        map <int,int> mp;
        for(int i=0; i<n+m; i++)
        {
                int x;
                cin>>x;
                mp[x]++;
                if(mp[x]==2)
                {
                    cont++;
                }
        }
        cout<<cont<<endl;
        cin>>n>>m;
    }
    return 0;
}
