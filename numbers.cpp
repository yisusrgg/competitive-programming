#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int> v;
    cout<<2<<endl;
    for(int i=1; i<=n; i++)
    {
        v.push_back(i);
    }
    for(int i=1; i<n; i++)
    {
        int cont= (v[v.size()-1] + v[v.size()-2]);
        cout<< v[v.size()-1] << " " << v[v.size()-2]<<endl;
        v.pop_back();
        v.pop_back();
        if(cont%2==1)
        {
            cont++;
        }
        v.push_back(cont/2);
    }

}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
    return 0;
}
