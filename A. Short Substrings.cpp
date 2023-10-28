
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin >>n;
    while(n--)
    {
        string x; cin >>x;
        string r = "";
        for(int i=0; i<x.size(); i++)
        {
            if(x[i]==x[i+1])
            {
                r+=x[i];
                i++;
            }
            else{
                r+=x[i];
            }
        }
        cout<<r<<endl;

    }
    return 0;
}
