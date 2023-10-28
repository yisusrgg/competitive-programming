#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        int z;
        cin >>z;
        int cont=0;
        for(int j=0;j <z; j++)
        {
            int a; cin>>a;
            cont+=a;
        }
        if(cont%2==0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
