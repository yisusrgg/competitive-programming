
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin>>s>>n;
    vector < pair <int,int> > v1;
    for(int i = 0; i<n ; i++)
    {
        int x,y;
        cin>>x>>y;
        v1.push_back(make_pair (x, y));
    }

    sort(v1.begin(), v1.end());
    for(int i = 0; i<n ; i++)
    {
        if(s>v1[i].first)
        {
            s+=v1[i].second;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}
