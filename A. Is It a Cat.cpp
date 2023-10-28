
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >>t;
    for(int i = 0; i<t; i++)
    {
        int z; cin >>z;
        string x; cin >>x;
        string igu = "";
        for(int j=0; j<x.size(); j++)
        {
            if(x[j]>='A' && x[j]<='Z')
            {
                x[j]+=32;
            }
        }
        int j = 0;
        int zy = 0;
        int m = 0, e=0, o=0, w=0;
        if(x[j]=='m')
        {
            while(x[j]=='m' && j<z)
            {
                m=1;
                j++;
            }
        }
        else
        {
            zy=1;
        }

        if(x[j]=='e')
        {
            while(x[j]=='e' && j<z)
            {
                e=1;
                j++;
            }
        }
        else
        {
            zy=1;
        }

        if(x[j]=='o')
        {
            while(x[j]=='o' && j<z)
            {
                o=1;
                j++;
            }
        }
        else
        {
            zy=1;
        }

        if(x[j]=='w')
        {
            while(x[j]=='w' && j<z)
            {
                w=1;
                j++;
            }
        }
        else
        {
            zy=1;
        }

        if(m==1 && e==1 && o==1 && w==1 && j==z && zy==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
