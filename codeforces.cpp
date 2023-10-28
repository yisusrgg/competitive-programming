#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >>n;
    for(int i=1; i<=n; i++)
    {
        int x; cin>>x;
        int mayor=-1;
        int indice=-1;
        for(int j=1; j<=x; j++)
        {
            int a, b; cin >>a>>b;
            if(a<=10)
            {
                if(b>=mayor)
                {
                    mayor=b;
                    indice=j;
                }
            }
        }
        cout<<indice<<endl;
    }

    return 0;
}
