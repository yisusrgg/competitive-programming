#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    for(int i=0; i<n; i++)
    {
        int mat[10][10];
        int cont=0;
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                cin >>mat[j][k];
                if((mat[j][k]=='X') && ((j==0) || (j==9) || (j>0 && k==0) || (j>0 && k==9)))
                {
                    cont++;
                }
                else if((mat[j][k]=='X') && ((j==1 && (k>0 && k<9)) || (j==8 && (k>0 && k<9)) || ((j>1 && j<8) && k==1) || ((j>1 && j<8) && k==8)))
                {
                    cont+=2;
                }
                else if((mat[j][k]=='X') && ((j==2 && (k>1 && k<8)) || (j==7 && (k>1 && k<8)) || ((j>2 && j<7) && k==2) || ((j>2 && j<7) && k==7)))
                {
                    cont+=3;
                }
                else if((mat[j][k]=='X') && ((j==3 && (k>2 && k<7)) || (j==6 && (k>2 && k<7)) || ((j>3 && j<6) && k==3) || ((j>3 && j<6) && k==6)))
                {
                    cont+=4;
                }
                else if((mat[j][k]=='X') && ((j==4 && (k>3 && k<6))) || (j==5 && (k>3 && k<6)))
                {
                    cont+=5;
                }
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}
