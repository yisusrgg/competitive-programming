
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
    for(int i=0; i<3; i++)
    {
        for(int j=i; i<3; i++)
        {
            if(v[i]==v[j])
            {
                cont++;
                break;
            }
        }
    }

    return 0;
}
