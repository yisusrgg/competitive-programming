#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        string x;
        cin >>x;
        if(x=="abc" || x=="acb" || x=="bac" || x=="cba")
        {
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }

}
