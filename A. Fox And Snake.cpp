
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin>>a>>b;
    string x1;
    string x2;
    string x3;
    bool zy = 1;
    for(int i=0; i<b; i++)
    {
        x1+="#";
    }


    for(int i=0; i<b; i++)
    {
        if(i==b-1)
        {
            x2+="#";
        }
        else x2+=".";
    }


    for(int i=0; i<b; i++)
    {
        if(i==0)
        {
            x3+="#";
        }
        else x3+=".";
    }

    for(int i=1; i<=a; i++)
    {
        if(i%2!=0)
        {
            cout<<x1<<endl;
        }
        else if(i%2==0 && zy)
        {
            cout<<x2<<endl;
            zy = 0;
        }
        else if(i%2==0 && !zy)
        {
            cout<<x3<<endl;
            zy = 1;
        }
    }

    return 0;
}
