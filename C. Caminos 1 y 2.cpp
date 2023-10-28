#include <bits/stdc++.h>
using namespace std;
int cont = 0;
int recu(double max1, double max2, double min1, double min2) {
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
    if(max1>min2)
    {
        cont++;
        recu(max1/=2.0, max2, min1, min2);
    }
}

int main() {
    double a,b,c,d;
    cin >> a>>b>>c>>d;
    double max1 = max(a,b);
    double max2 = max(c,d);
    double min1 = min(a,b);
    double min2 = min (c,d);
    cout<<recu(max1, max2, min1, min2);
    return 0;
}






