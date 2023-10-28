#include <stdio.h>
#include <string.h>
char arr[85];
int main()
{
    fgets(arr, 85, stdin);
    int bandera = 1;
    for(int i=0; i<strlen(arr); i++)
    {

        if(i== 0 && arr[i]>=97 && arr[i]<=122)
        {
            arr[i]-=32;
        }

        if(arr[i]== '.')
        {
            bandera=1;
        }
        else if(arr[i]== ' ')
        {
            continue;
        }
        else if(bandera==1)
        {
            if(arr[i] >= 97 && arr[i]<=122)
            {
                arr[i] -=32;
            }
            bandera = 0;
        }
        else
        {
            if((arr[i]>=65 && arr[i]<=90))
            {
                arr[i]+=32;
            }
        }

    }
    printf("%s", arr);

    return 0;
}
