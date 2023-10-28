#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for(int i = 0 ; i<t; i++)
    {
        int n; cin>>n;
        int cont=0;
        int cont2=0;
        for(int j=0; j<n; j++)
        {
            int z; cin >>z;
            if(z==0)
            {
                cont2++;
            }
            if(cont2>cont)
            {
                cont=cont2;
            }
            if(z==1)
            {
                cont2=0;
            }

        }
        cout<<cont<<endl;
    }
    return 0;
}
