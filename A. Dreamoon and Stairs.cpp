#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m; cin >>n >>m;
    int veces=0;
    int cont=0;
    if(n%2==0)
    {
        cont=n/2;
        veces=cont;
    }
    else{
        cont=n/2+1;
        veces= n/2;
    }
    bool zy=1;
    while(zy)
    {
        if(cont%m!=0 && veces!=0)
        {
            cont++;
            veces--;
        }
        else{
            zy=0;
        }
    }
    if(cont%m==0)
    {
        cout<<cont;
    }
    else cout<<-1;
    return 0;
}
