
#include <bits/stdc++.h>
using namespace std;
int v[100005];
int main()
{
    int n; cin >>n;

    int cont = 0;
    for(int i = 0; i<n; i++)
    {
        int z; cin>>z;
        v[z]++;
        if(z==4)
        {
            cont++;
        }
    }

    while(v[3]>0 && v[1]>0)
    {
        v[3]--;
        v[1]--;
        cont++;
    }

    while(v[2]>1)
    {
        v[2]-=2;
        cont++;
    }

    while(v[2]>0 && v[1]>0)
    {
        if(v[2]>0 && v[1]>1)
        {
            v[2]--;
            v[1]-=2;
            cont++;
            continue;
        }
        else
        {
            v[2]--;
            v[1]--;
            cont++;
        }
    }

    while(v[1]>3)
    {
        v[1]-=4;
        cont++;
    }

    while(v[1]!=0)
    {
        v[1]--;
        if(v[1]==0)
        {
            cont++;
        }
    }
    cont+=v[2]+v[3];
    cout<<cont;
    return 0;
}
