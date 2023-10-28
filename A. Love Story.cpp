
#include  <bits/stdc++.h>
using namespace std;
int main()
{

    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int cont=0;
        string x; cin >>x;
        string z = "codeforces";
        for(int j=0; j<10; j++)
        {
            if(x[j]!=z[j])
            {
                cont++;
            }
        }
        cout<<cont<<endl;
    }

    return 0;
}
