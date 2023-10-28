#include <bits/stdc++.h>
using namespace std;
int arr[4];
int main()
{
    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+3);
    int sum = abs(arr[0]-arr[1])+ abs(arr[1]-arr[1])+ abs(arr[2]-arr[1]);
    cout<<sum;
}
