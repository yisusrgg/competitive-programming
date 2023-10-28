
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x; cin >>x;
    bool zy = 1;
    x++;
    while(zy)
    {
        bool cy = 0;
        string z = to_string(x);
        for(int i=0; i<z.size(); i++)
        {
            for(int j=i+1; j<z.size(); j++)
            {
                if(z[i]==z[j])
                {
                    x++;
                    cy = 1;
                }
            }
            if(cy==1) break;
        }
        z = to_string(x);
        if(cy==0) break;
    }
    cout<<x;
    return 0;
}
