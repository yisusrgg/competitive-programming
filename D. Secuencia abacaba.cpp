
#include <bits/stdc++.h>
using namespace std;
string abaca(int i, int n, string &ant, string &act)
{
    if(i==1)
    {
        act="A";
        ant="A";
        i++;
        abaca(i,n,ant,act);
    }
    else if(i<=n)
    {
        char z = i+64;
        act+=z;
        act+=ant;
        ant=act;
        i++;
        abaca(i,n,ant,act);
    }
    return act;
}
int main()
{
    int n; cin >>n;
    string ant="", act="";
    cout<<abaca(1,n,ant,act);
    return 0;
}
