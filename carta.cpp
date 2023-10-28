
#include <bits/stdc++.h>
using namespace std;
int cont = 0;
int recu(long double &max1, long double &max2, long double &min1, long double &min2) {
    if(cont>8)
    {
        return -1;
    }
    if(min1<=max2 && max1<=min2)
    {
        return cont;
    }
    if(min1>max2)
    {
        cont++;
        recu(max1, max2, min1/=2.0, min2);
    }
    else if(max1>min2)
    {
        cont++;
        recu(max1/=2.0, max2, min1, min2);
    }
}

int main() {
    long double a,b,c,d;
    cin >> a>>b>>c>>d;
    long double max1 = max(a,b);
    long double max2 = max(c,d);
    long double min1 = min(a,b);
    long double min2 = min (c,d);
    cout<<recu(max1, max2, min1, min2);
    return 0;
}


