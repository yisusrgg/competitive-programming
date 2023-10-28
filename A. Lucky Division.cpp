#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cont=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            cont-=i;
        }
        else
        {
            cont+=i;
        }
    }
    cout<<cont;

    return 0;
}
