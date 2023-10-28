#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    priority_queue<pair<int,int>>pq;
    bool zy=1;
    while(zy)
    {
        string x;
        cin >> x;
        if(x=="#")
        {
            break;
            zy=0;
        }
        int a,b;
        cin >>a>>b;
        a*=-1;
        b*=-1;
        for(int i=1; i<=100005; i++)
        {
            pq.push(make_pair(b*i,a));
        }
    }
    int x; cin >>x;
    for(int i=1; i<=x; i++)
    {
        cout<<(pq.top().second)*-1<< endl;
        pq.pop();
    }
    return 0;
}
