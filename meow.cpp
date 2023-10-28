
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >>t;
    for(int i=0; i<t; i++)
    {
        int z; cin >>z;
        string x; cin >>z;
        for(int j=0; j<x.size(); j++)
        {
            if(x[j]>='A' && x[j]<='Z')
            {
                x[j]+=32;
            }
        }
        if(x[0]!='m' && x[z-1]!='w')
        {
            cout<<"NO"<<endl;
            continue;
        }

        int m=1, e=0; o=0, w=1;
        for(int j=0; j<x.size; j++)
        {
            if(m==1 && e==0 && x[j-1]==)
        }

    }



    return 0;
}
