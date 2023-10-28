
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        vector <int> v;
        int cont = 10;
        int pos = -1;
        int r = 1;
        for(int j=0; j<x; j++)
        {
            int z; cin >>z;
            v.push_back(z);
            if(z<cont)
            {
                pos=j;
                cont=z;
            }
        }
        v[pos]++;
        for(int j = 0; j<x; j++)
        {
            r*=v[j];
        }
        cout<<r<<endl;
    }

    return 0;
}
