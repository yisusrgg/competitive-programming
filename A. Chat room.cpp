#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x; cin >>x;
    int h=0, e=0, l1=0, l2=0, o=0;
    for(int i=0;i <x.size(); i++)
    {
        if(h==0 && x[i]=='h')
        {
            h=1;
        }
        else if(h==1 && e==0 && x[i]=='e')
        {
            e=1;
        }
        else if(h==1 && e==1 && l1==0 && x[i]=='l')
        {
            l1=1;
        }
        else if(h==1 && e==1 && l1==1 && l2==0 && x[i]=='l')
        {
            l2=1;
        }
        else if(h==1 && e==1 && l1==1 && l2==1 && o==0 && x[i]=='o')
        {
            o=1;
        }
    }

    if(h==1 && e==1 && l1==1 && l2==1 && o==1)
    {
        cout<<"YES";
    }
    else cout<<"NO";


    return 0;
}
