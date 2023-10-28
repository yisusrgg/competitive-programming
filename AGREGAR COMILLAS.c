#include <stdio.h>
#include <string.h>
char arr[80];
int main()
{
    fgets(arr, 80, stdin);
    int x = strlen(arr);
    int cont=0;
    for(int i=0; i<x; i++)
    {
        if(arr[i]!=':')
        {
            cont++;
        }
        else if(arr[i]==':')
        {
            for(int j=x; j>cont; j--)
            {
                arr[j+1]= arr[j];
                arr[j]=' ';
            }

        }
    }
    printf("%s", arr);


    return 0;
}
