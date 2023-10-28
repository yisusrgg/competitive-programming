#include <stdio.h>
#include <string.h>
char arr[1005];
int main()
{
    int p,s,b;
    scanf("%d %d %d", &p, &s, &b);
    scanf("%s", arr);
    int x = strlen(arr);
    int cont = 0;
    for(int i=0; i<x; i++)
    {
        if(arr[i]=='-')
        {
            cont+=p;
        }
        else if(arr[i]=='/')
        {
            cont+=s;
        }
        else
        {
            cont+=b;
        }
    }
    printf("%d", cont);


    return 0;
}
