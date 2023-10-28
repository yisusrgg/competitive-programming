#include <bits/stdc++.h>
using namespace std;

void dobla (double &a,double &b, double &c, double &d, int i, int cont)
{
    if(i<=8)
    {
        if(b>a)
        {
            b/=2;
            cont++;
        }
        else if(a>=b)
        {
            a/=2;
            cont++;
        }

        if(a*b<=c*d)
        {
            cout<<cont;
            return;
        }
        else{
            dobla(a,b,c,d,i,cont);
        }
    }

}
int main()
{
    double a,b;
    double c,d;
    cin>>a>>b>>c>>d;
    dobla(a,b,c,d,0,0);

    return 0;
}
