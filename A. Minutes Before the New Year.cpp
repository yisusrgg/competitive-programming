
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        int minutos = 60-b;
        int horas = 23-a;
        horas*=60;
        cout<<minutos+horas<<endl;;
    }
    return 0;
}
