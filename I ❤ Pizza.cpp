#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int x;
    cin >> x;
    string basura;
    getline(cin,basura);
    for(int i=0; i<x; i++)
    {
        string z;
        getline(cin,z);
        map<int, int> mp;
        int cont=0;
        for(int i=0; i<z.size(); i++)
        {
            mp[z[i]]++;
            if(mp['A']>=1 && mp['R']>=1 && mp['M']>=1 && mp['G']>=1 && mp['I']>=1 && mp['T']>=1)
            {
                cont++;
                mp['M']--;
                mp['A']--;
                mp['R']--;
                mp['G']--;
                mp['I']--;
                mp['T']--;
            }
        }
        cout<<cont;
    }


    return 0;
}
