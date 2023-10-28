#include <stdio.h>
#include <string.h>
char arr[85];
int main()
{
    fgets(arr, 85, stdin);
    int x = strlen(arr);
    int bandera = 1;
    for(int i=0; i<x; i++)
    {
        if(bandera==1)
        {
            if(arr[i] >= 'A' && arr[i]<='Z')
            {
                bandera=0;
                continue;
            }
            else if(arr[i]>='a' && arr[i]<='z')
            {
                arr[i]-=32;
                bandera=0;
                continue;
            }
        }
        if(arr[i]==' ')
        {
            continue;
        }
        if(arr[i]=='.')
        {
            bandera=1;
        }
        else if(bandera==0 && arr[i]>='A' && arr[i]<='Z')
        {
            arr[i]+=32;
        }
    }
    printf("%s", arr);
    return 0;
}
