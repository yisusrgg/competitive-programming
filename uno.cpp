#include <bits/stdc++.h>
using namespace std;
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector <long long> v;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(long long i:v)
        {
            if(b+i<=a)
                b+=i;
            else{
                ans+=(b-1);
                b=min(1+i,a);
            }
        }
        ans+=(b);
        cout<<ans<<endl;

    }
    return 0;
}
