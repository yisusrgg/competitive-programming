#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >>t;
    for(int i=0; i<t; i++)
    {
        int a,b,n; cin >>a>>b>>n;
        int cont=0;
        while(a<=n && b<=n)
        {
            if(a<b)
            {
                a+=b;
            }
            else{
                b+=a;
            }
            cont++;
        }
        cout<<cont<<endl;
    }
    return 0;
}
