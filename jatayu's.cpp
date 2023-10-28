#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    string a;
    cin >>x>>a;
    int cont = 0;
    for(int i=1; i<=a.size(); i++)
    {
        if(a[i]=='(' && a[i-1]=='(')
        {
            cont++;
        }
    }
    cout<<++cont<<endl;
}
int main()
{
    int n;
    cin >>n;
    while(n--)
    {
        solve();
    }
    return 0;
}
