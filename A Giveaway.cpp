#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i = -1;
    while(i!=0)
    {
        long long x; cin>>x; i=x;
        if(x==0)
        {
            return 0;
        }

        if(x==1 || x== 64 || x==729|| x==4096 || x== 15625 || x==46656 || x== 117649 || x==262144 || x==531441 || x==1000000 || x==1771561 || x== 2985984 || x==4826809 || x== 7529536 || x==11390625 || x==16777216 || x== 24137569 || x== 34012224 || x==47045881 || x==64000000 || x==85766121)
        {
            cout<<"Special"<<endl;
        }
        else
        {
            cout<<"Ordinary"<<endl;
        }
    }
    return 0;
}
