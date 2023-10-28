#include <bits/stdc++.h>
using namespace std;
int main()
{
    int posicionx = -1;
    int posiciony = -1;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            int x; cin>>x;
            if(x==1)
            {
                posicionx=i;
                posiciony=j;
            }
        }
    }
    int cont=0;
    if(posicionx<3)
    {
        cont+=3-posicionx;
    }
    else
    {
        cont+=posicionx-3;
    }
    if(posiciony<3)
    {
        cont+=3-posiciony;
    }
    else
    {
        cont+=posiciony-3;
    }
    cout<<cont;
}
