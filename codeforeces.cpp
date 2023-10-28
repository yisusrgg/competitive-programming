#include <bits/stdc++.h>
long long arr[505];
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        bool zy = true;
        long long cont = 0;
        long long ind = 505;
        long long menor = 1000000005;
        for(int j=0; j<x; j++)
        {
            long long z; cin >>z;
            arr[j]=z;
            if((j>=1 && arr[j]<arr[j-1]))
            {
                zy=false;
            }
            if(j>=1 && (arr[j]-arr[j-1]<menor))
            {
                ind= j;
                menor = arr[j]-arr[j-1];
            }
        }
        if(zy)
        {
            cont = (arr[ind-1] - arr[ind-2]) / 2 + 1;
        }

        cout<<cont<<endl;
    }
    return 0;
}
