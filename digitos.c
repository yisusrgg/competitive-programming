#include <stdio.h>
#include <stdbool.h>
int nDecimal(int n, int arr[])
{
    int con=0;
    int x=0;
    int emp=0;
    bool encuentra=false;
    for(int i=0; i<6; i++)
    {
        if(arr[i]!=0 && emp==0)
        {
            encuentra=true;
            emp=i;
        }
        if(encuentra)
        {
            con++;
        }

    }
    long long c=0;
    int emp2=emp;
    int empArr;
    int arr2[10];
    bool primero=false;
    int repetidos=0;
    for(int i=1; i<=100000; i++)
    {
        arr2[0]=i/100000;
        arr2[1]=i/10000-arr2[0]*10;
        arr2[2]=i/1000-arr2[1]*10-arr2[0]*100;
        arr2[3]=(i-(arr2[2]*1000))/100-arr2[1]*100-arr2[0]*1000;
        arr2[4]=(i- (arr2[2]*1000 + arr2[3]*100))/10-arr2[1]*1000-arr2[0]*10000;
        arr2[5]=i-(arr2[2]*1000 + arr2[3]*100 + arr2[4]*10)-arr2[1]*10000-arr2[0]*100000;
        if(arr2[0]!=0)
        {
            empArr=0;
        }
        else if(arr2[1]!=0)
        {
            empArr=1;
        }

        else if(arr2[2]!=0)
        {
            empArr=2;
        }

        else if(arr2[3]!=0)
        {
            empArr=3;
        }

        else if(arr2[4]!=0)
        {
            empArr=4;
        }

        else if(arr2[5]!=0)
        {
            empArr=5;
        }
        int h=empArr;
        for(int j=0; j<6-empArr; j++)
        {
            c++;
            if(arr[emp]==arr2[h])
            {
                x++;
                if(primero)
                {
                    c--;
                    repetidos++;
                }
                primero=true;
                if(x==con)
                {
                    printf("%lld\n",c);
                    return 0;
                }
                    emp++;
                }
                else
                {
                    c+=repetidos;
                    repetidos=0;
                    primero=false;
                    x=0;
                    emp=emp2;
                }
                h++;
            }
    }
}
int main(){
	int n;	scanf("%d",&n);
	int arr[500000];
	arr[0]=n/100000;
	arr[1]=n/10000-arr[0]*10;
	arr[2]=n/1000-arr[1]*10-arr[0]*100;
	arr[3]=(n-(arr[2]*1000))/100-arr[1]*100-arr[0]*1000;
	arr[4]=(n- (arr[2]*1000 + arr[3]*100))/10-arr[1]*1000-arr[0]*10000;
	arr[5]=n-(arr[2]*1000 + arr[3]*100 + arr[4]*10)-arr[1]*10000-arr[0]*100000;
	nDecimal(n,arr);
    return 0;
}
