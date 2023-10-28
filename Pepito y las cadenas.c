#include <stdio.h>
#include <string.h>
char arr1[105];
char arr2[5];
int main()
{
    int bandera = 1;
    while(bandera==1)
    {
        int cont1=0;
        int cont2=0;
        int cont3=0;
        scanf("%s", arr1);
        if(arr1[0]=='0')
        {
            bandera=0;
            break;
        }
        scanf("%s", arr2);
        int x = strlen(arr1);
        for(int i=0; i<x; i++)
        {
            if(arr1[i]==arr2[0])
            {
                cont1++;
            }
            else if(arr1[i]==arr2[1])
            {
                cont2++;
            }
            else if(arr1[i]==arr2[2])
            {
                cont3++;
            }
        }
        if(cont1==1 && cont2==1 && cont3==1)
        {
            printf("POSIBLE\n");
        }
        else
        {
            printf("IMPOSIBLE\n");
        }
    }


    return 0;
}
