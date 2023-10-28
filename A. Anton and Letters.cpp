
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string x;
    getline(cin,x);
    map <char, int> mp;
    int cont = 0;
    for(int i = 0; i<x.size(); i++)
    {
        if(x[i]>='a' && x[i]<='z')
        {
            char z = x[i];
            mp[z]=1;
        }
    }
    for(int i = 'a'; i<='z'; i++)
    {
        if(mp[i]==1)
        {
            cont++;
        }
    }
    cout<<cont;
    return 0;
}
