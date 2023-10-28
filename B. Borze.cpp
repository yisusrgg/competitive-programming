
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x; cin >>x;
    string r ="";
    for(int i= 0; i<x.size(); i++)
    {
        if(x[i]=='-' && x[i+1]=='.')
        {
            r+='1';
            i++;
            continue;
        }
        else if(x[i]=='-' && x[i+1]=='-')
        {
            r+='2';
            i++;
            continue;
        }
        else
        {
            r+='0';
            continue;
        }

    }
    cout<<r;
    return 0;
}
