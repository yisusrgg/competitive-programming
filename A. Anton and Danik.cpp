
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a; cin >>a;
    string b; cin >> b;
    int an = 0, da=0;
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]=='A')
        {
            an++;
        }
        else if(b[i]=='D')
        {
            da++;
        }
    }
    if(da > an)
    {
        cout<<"Danik";
    }
    else if(an>da)
    {
        cout<<"Anton";
    }
    else if(an==da)
    {
        cout<<"Friendship";
    }

    return 0;
}
