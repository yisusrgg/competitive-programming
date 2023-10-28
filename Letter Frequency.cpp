#include <bits/stdc++.h>
using namespace std;

void calcular(map <int,int>mp, int mayor)
{
    for(int i='a'; i<='z'; i++)
    {
        if(mp[i]==mayor)
        {
            char z = i;
            cout<<z;
        }
    }
    cout<<endl;
}

void proceso(int n)
{
    for(int i=0; i<n; i++)
    {
        int mayor = 0;
        string x; getline(cin,x);
        map<int, int> mp;
        for(int i=0;i<x.size(); i++)
        {
            int z = x[i];
            if(z==' ')
            {
                continue;
            }
            if(z>='A' && z<='Z')
            {
                z = tolower(z);
            }
            mp[z]++;
            if(mp[z]>mayor)
            {
                mayor = mp[z];
            }
        }
        calcular(mp,mayor);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    string basura;
    cin>>n;
    getline(cin,basura);
    proceso(n);
    return 0;
}

