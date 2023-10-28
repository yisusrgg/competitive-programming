#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int a; cin >>a;
    int cont =0;
    cont += a/5;
    a=a%5;

    cont+= a/4;
    a=a%4;

    cont+= a/3;
    a=a%3;

    cont+= a/2;
    a=a%2;

    cont+= a/1;
    a=a%1;
    cout<<cont;
    return 0;
}
