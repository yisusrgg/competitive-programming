#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string res = "";
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='Y' ||
           a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
        {
            continue;
        }
        else
        {
            res+='.';
            res+=tolower(a[i]);
        }
    }
    cout<<res;
    return 0;
}
