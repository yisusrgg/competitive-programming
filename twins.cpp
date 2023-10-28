
#include  <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int mayor=0;
    int cont=0;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int z; cin>>z;
        v.push_back(z);
    }
    sort(v.begin(), v.end());
    for(int i=n-1; i>=0; i--)
    {
        int menor=0;
        mayor+=v[i];
        for(int j=0; j<i; j++)
        {
            menor+=v[j];
        }
        cont++;
        if(mayor>menor)
        {
            break;
        }
    }
    cout<<cont;
    return 0;
}
