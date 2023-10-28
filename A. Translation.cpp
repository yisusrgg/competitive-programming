#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x; cin>>x;
    int cont=0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='4' || x[i]=='7')
        {
            cont++;
        }
    }
    if(cont==7 || cont==4)
    {
        cout<<"YES";
    }
    else cout <<"NO";
    return 0;
}
