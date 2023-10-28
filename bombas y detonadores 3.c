#include <stdio.h>
int arr3[30];
int main()
{
    int m;
    scanf("%d", &m);
    char arr1[m+5];
    for(int i = 0; i<m; i++)
    {
        char z;
        scanf(" %c", &z);
        arr1[i] = z;
    }

    int c;
    scanf("%d", &c);
    char arr2[c];
    for(int i = 0; i<c; i++)
    {
        char z;
        scanf(" %c", &z);
        arr2[i] = z;
    }

    for(int i=0; i<26; i++)
    {
        scanf("%d", &arr3[i]);
    }
    int cont = 0;

    for(int i = 0; i<m; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr1[i]=='A' && arr2[j]=='A')
            {
                cont+=1;
                arr2[j] = 'a';
            }
            else if(arr1[i]=='B' && arr2[j]=='B')
            {
                cont+=2;
                arr2[j] = 'a';
                arr1[i] ='b';
            }
            else if(arr1[i]=='C' && arr2[j]=='C')
            {
                cont+=3;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='D' && arr2[j]=='D')
            {
                cont+=4;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='E' && arr2[j]=='E')
            {
                cont+=5;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='F' && arr2[j]=='F')
            {
                cont+=6;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='G' && arr2[j]=='G')
            {
                cont+=7;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='H' && arr2[j]=='H')
            {
                cont+=8;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='I' && arr2[j]=='I')
            {
                cont+=9;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='J' && arr2[j]=='J')
            {
                cont+=10;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='K' && arr2[j]=='K')
            {
                cont+=11;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='L' && arr2[j]=='L')
            {
                cont+=12;
                arr2[j] ='a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='M' && arr2[j]=='M')
            {
                cont+=13;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='N' && arr2[j]=='N')
            {
                cont+=14;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='O' && arr2[j]=='O')
            {
                cont+=15;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='P' && arr2[j]=='P')
            {
                cont+=16;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='Q' && arr2[j]=='Q')
            {
                cont+=17;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='R' && arr2[j]=='R')
            {
                cont+=18;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='S' && arr2[j]=='S')
            {
                cont+=19;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='T' && arr2[j]=='T')
            {
                cont+=20;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='U' && arr2[j]=='U')
            {
                cont+=21;
                arr2[j] ='a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='V' && arr2[j]=='V')
            {
                cont+=22;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='W' && arr2[j]=='W')
            {
                cont+=23;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='X' && arr2[j]=='X')
            {
                cont+=24;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='Y' && arr2[j]=='Y')
            {
                cont+=25;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
            else if(arr1[i]=='Z' && arr2[j]=='Z')
            {
                cont+=26;
                arr2[j] = 'a';
                arr1[i] = 'b';
            }
        }

    }
    printf("%d", cont);

}
