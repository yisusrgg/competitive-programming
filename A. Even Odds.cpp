#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double n, m;
    cin>> n>> m;
    if((long double)m <= (long double)(ceil(n/2.0)))
    {
        cout<< fixed << setprecision(0) <<(long double)((2*m)-1);
    }
    else if((long long)n%2==0){
        cout<< fixed << setprecision(0) <<(long double) 2*m-n;
    }
    else{
        cout<< fixed << setprecision(0) <<(long double)(2*m-n-1);
    }
    return 0;
}
