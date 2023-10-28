#include <bits/stdc++.h>
int arr[55];
using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+m);
    int mejor = 100000000;
    for(int i=0; i<m-(n-1); i++)
    {
        if(arr[i+n-1]- arr[i]<mejor)
        {
            mejor = arr[i+n-1]- arr[i];
        }
    }
    cout<<mejor;
    return 0;
}
