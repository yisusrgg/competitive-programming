#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n; cin >>n;
    string x; cin>>x;
    int cont=0;
    for(int i=0; i<n; i++)
    {
        if(x[i]==x[i+1] && i!=n-1)
        {
            cont++;
        }
    }
    cout<<cont;
    return 0;
}
