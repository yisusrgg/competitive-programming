
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >>t;
    for(int i=0; i<t; i++)
    {
        int a,b; cin >>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
            continue;
        }
        int r = a%b;
        cout<<b-r<<endl;
    }
    return 0;
}
