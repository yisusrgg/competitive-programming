#include <bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
    int n; cin >>n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int mayor = arr[n-1];
    int cont=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<mayor)
        {
            cont+= mayor - arr[i];
        }
    }
    cout<<cont;

    return 0;
}
