#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x; cin >>x;
    int mayus = 0;
    int minusculas = 0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]>='a' && x[i]<='z')
        {
            minusculas++;
        }
        else mayus++;
    }
    if(mayus>minusculas)
    {
        for(int i = 0; i<=x.size(); i++)
        {
            x[i] = toupper(x[i]);
        }
    }
    else if(minusculas>=mayus)
    {
        for(int i = 0; i<=x.size(); i++)
        {
            x[i] = tolower(x[i]);
        }
    }
    cout<<x;
    return 0;
}
