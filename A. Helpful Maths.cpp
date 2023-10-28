#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x; cin >>x;
    int a=0, b=0, c=0, mas=0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='1')
        {
            a++;
        }
        else if(x[i]=='2')
        {
            b++;
        }
        else if(x[i]=='3')
        {
            c++;
        }
        else mas++;
    }
    for(int i=0; i<x.size(); i++)
    {
        if(a>0)
        {
            cout<<1;
            a--;
        }
        else if(b>0 && a==0)
        {
            cout<<2;
            b--;
        }
        else if(a==0 && b==0 && c>0)
        {
            cout<<3;
            c--;
        }
        if(mas>0)
        {
            cout<<'+';
            mas--;
        }
    }
    return 0;
}
