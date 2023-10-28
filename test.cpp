#include <bits/stdc++.h>
using namespace std;
int main()
{

    int nums [] = {3,8,5,2};
    int res= 0;
    for(int x:nums)
    {
        if(x>res)
        {
            res=x;
        }
    }
    cout<<res;
}
