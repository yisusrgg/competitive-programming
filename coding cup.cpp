#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n; cin >>n;
    double cal = 0;
    double med = 0;
    for(int i=0; i<n; i++)
    {
        double a, b;
        cin>>a>>b;
        cal+= b;
        med += a*(b/100.0);
        for(int j=0; j<a; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    if(med>=6)
    {
        med = round(med);
        cout<<med<<endl<<":)";
    }
    else
    {
        cout<<0<<endl<<":(";
    }

    return 0;
}
