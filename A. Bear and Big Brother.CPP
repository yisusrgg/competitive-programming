#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string n;
    cin>>n;
    int cont1= 0, cont2= 0;
    for(int i=0; i<6; i++)
    {
        if(i<3)
        {
            n[i]-=48;
            cont1+=n[i];
        }
        else
        {
            n[i]-=48;
            cont2+=n[i];
        }
    }
    if(cont1==cont2)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    int n; cin>>n;
    while(n--)
    {
        solve();
    }
    return 0;
}
