#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b; cin >>a>>b;
    int cont = 0;
    for(int i=0; i<a; i++)
    {
        int x; cin >>x;
        if(x>b)
        {
            cont+=2;
        }
        else if(x<=b)
        {
            cont++;
        }
    }
    cout<<cont;
    return 0;
}
