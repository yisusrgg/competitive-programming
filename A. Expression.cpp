

#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin >>a>>b>>c;
    int maxi = -1;
    if(a+(b*c)>maxi) maxi = a+(b*c);
    if((a+b)*c>maxi) maxi = (a+b)*c;
    if((a*(b+c))>maxi) maxi = a*(b+c);
    if(a+b+c>maxi) maxi = a+b+c;
    if(a*b*c > maxi) maxi = a*b*c;
    cout<<maxi;
    return 0;
}
