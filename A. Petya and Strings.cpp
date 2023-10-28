#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a; cin>>a;
    string b; cin>>b;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }
        if(b[i]>='A' && b[i]<='Z')
        {
            b[i]+=32;
        }
    }
    if(a==b)
    {
        cout<<0;
    }
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]<b[i]){
                cout<<-1;
                break;
            }
            if(a[i]>b[i])
            {
                cout<<1;
                break;
            }
        }
    }
    return 0;
}
