#include <bits/stdc++.h>
using namespace std;
long long arr[100005];
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        long long a,b; cin>>a,b;
        long long cont=0;
        for(int j=0; j<a; j++)
        {
            long long x; cin>>x;
            arr[j]=x;
            if(j>=1 && j<=b-1)
            {
                if(arr[j]-arr[j-1]==b || arr[j+1]-arr[j]==b)
                {
                    cont++;
                }
            }
        }
        cout<<cont<<endl;
    }

    return 0;
}
