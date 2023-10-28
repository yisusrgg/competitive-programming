#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >>a;
    int uno = 0, cero = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='1')
        {
            cero = 0;
            uno++;
        }
        else if(a[i]=='0')
        {
            uno = 0;;
            cero++;
        }
        if(uno>=7 || cero>=7)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
