#include <stdio.h>
#include <string.h>
char arr[1001];
char reves[1001];
int main()
{
    scanf("%s", arr);
    int x = strlen(arr);
    int cont = 0;
    for(int i=0; i<x; i++)
    {
       if(arr[i]!=',')
       {
           reves[cont]=arr[i];
           cont++;
       }
       else
       {
           for(int j =cont-1; j>=0; j--)
           {
               printf("%c", reves[j]);
           }
           printf(",");
           cont=0;
       }
    }
    for(int i=cont-1; i>=0; i--)
    {
        printf("%c", reves[i]);
    }
    return 0;
}
