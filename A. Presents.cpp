
#include <bits/stdc++.h>
int arr[105];
using namespace std;
int main()
{

    int n ; cin >>n;
    vector<int>v;
    for(int i=1; i<=n; i++)
    {
        int z; cin >>z;
        arr[z] = i;
    }

    for(int i = 1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
