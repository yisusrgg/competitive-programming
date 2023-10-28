#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t; cin >>n>>t;
    string x; cin >>x;
    int cont=0;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<x.size(); j++)
        {
            if(x[j]=='B' && x[j+1]=='G')
            {
                swap(x[j], x[j+1]);
                j++;
            }
        }
    }
    cout<<x;
    return 0;
}
