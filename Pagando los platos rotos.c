#include <stdio.h>
int mat[4][4];
int main()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int cont=0;
    int x;
    scanf("%d", &x);
    int A1=0, A2=0, A3=0, A4=0;
    int B1=0, B2=0, B3=0, B4=0;
    int C1=0, C2=0, C3=0, C4=0;
    int D1=0, D2=0, D3=0, D4=0;
    for(int i=0; i<x; i++)
    {
        char arr[4];
        scanf("%s", arr);
        if(arr[0]=='A' && arr[1]=='1')
        {
            cont+=mat[0][0];
            A1++;
        }
        if(arr[0]=='A' && arr[1]=='2')
        {
            cont+=mat[0][1];
            A2++;
        }
        if(arr[0]=='A' && arr[1]=='3')
        {
            cont+=mat[0][2];
            A3++;
        }
        if(arr[0]=='A' && arr[1]=='4')
        {
            cont+=mat[0][3];
            A4++;
        }

        if(A1>=1 && A2>=1 && A3>=1 && A4>=1)
        {
            cont-=10;
            A1--;
            A2--;
            A3--;
            A4--;
        }

        if(arr[0]=='B' && arr[1]=='1')
        {
            cont+=mat[1][0];
            B1++;
        }
        if(arr[0]=='B' && arr[1]=='2')
        {
            cont+=mat[1][1];
            B2++;
        }
        if(arr[0]=='B' && arr[1]=='3')
        {
            cont+=mat[1][2];
            B3++;
        }
        if(arr[0]=='B' && arr[1]=='4')
        {
            cont+=mat[1][3];
            B4++;
        }

        if(B1>=1 && B2>=1 && B3>=1 && B4>=1)
        {
            cont-=10;
            B1--;
            B2--;
            B3--;
            B4--;
        }

        if(arr[0]=='C' && arr[1]=='1')
        {
            cont+=mat[2][0];
            C1++;
        }
        if(arr[0]=='C' && arr[1]=='2')
        {
            cont+=mat[2][1];
            C2++;
        }
        if(arr[0]=='C' && arr[1]=='3')
        {
            cont+=mat[2][2];
            C3++;
        }
        if(arr[0]=='C' && arr[1]=='4')
        {
            cont+=mat[2][3];
            C4++;
        }

        if(C1>=1 && C2>=1 && C3>=1 && C4>=1)
        {
            cont-=10;
            C1--;
            C2--;
            C3--;
            C4--;
        }

        if(arr[0]=='D' && arr[1]=='1')
        {
            cont+=mat[3][0];
            D1++;
        }
        if(arr[0]=='D' && arr[1]=='2')
        {
            cont+=mat[3][1];
            D2++;
        }
        if(arr[0]=='D' && arr[1]=='3')
        {
            cont+=mat[3][2];
            D3++;
        }
        if(arr[0]=='D' && arr[1]=='4')
        {
            cont+=mat[3][3];
            D4++;
        }
        if(D1>=1 && D2>=1 && D3>=1 && D4>=1)
        {
            cont-=10;
            D1--;
            D2--;
            D3--;
            D4--;
        }

    }

    printf("%d", cont);
    return 0;
}
