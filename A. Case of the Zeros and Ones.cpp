#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a1=0, a2=0;
    string x; cin>>x;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='1')
        {
            a1++;
        }
        else{
            a2++;
        }
        if(a1>=1 && a2>=1)
        {
            n-=2;
            a1--;
            a2--;
        }
    }
    cout<<n;
    return 0;
}
