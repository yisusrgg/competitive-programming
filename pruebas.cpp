

#include <bits/stdc++.h>
using namespace std;
int mini = 1e9;
int maxi = -1;
int main()
{
    int n ; cin>>n;
    int pos1 = -1;
    int pos2 = -1;
    for(int i =1; i<=n; i++)
    {
        int z; cin >>z;

        if(z>maxi)
        {
            maxi = z;
            pos1 = i;
        }
        if(z<=mini)
        {
            mini = z;
            pos2 = i;
        }

    }

    if(pos1>pos2)
    {
        cout<<(pos1-1) + (n-pos2)-1;
    }
    else
    {
        cout<<(pos1-1) + (n-pos2);
    }
    return 0;
}
