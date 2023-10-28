#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    int veces=0;
    int cont=1;
    int indice = 1;
    int total=0;
    bool zy = true;
    while(zy)
    {
        total+=cont;
        if(n-total>=0)
        {
            veces++;
        }
        else
        {
            zy=0;
        }
        indice++;
        cont+=indice;
    }
    cout<<veces;
    return 0;
}
