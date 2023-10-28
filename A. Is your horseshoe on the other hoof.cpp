
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long> v;
    for(int i=0; i<4; i++)
    {
        long long z; cin>>z;
        v.push_back(z);
    }
    int cont=0;
    sort(v.begin(), v.end());
    for(int i=0; i<3; i++)
    {
        if(v[i]==v[i+1])
        {
            cont++;
        }
    }
    cout<<cont;
    return 0;
}
