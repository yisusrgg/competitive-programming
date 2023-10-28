#include <stdio.h>
#include <string.h>
char arr[110];
char arr2[110];
int main()
{
    int n;
    scanf("%d", &n);
    scanf("%s", arr);
    int y = 0;
    int x = strlen(arr);
    if(n>10)
    {
        for(int i=1; i<x-1; i++)
        {
            arr2[y] = arr[i];
            y++;
        }
        int x1 = strlen(arr2);
        printf("%c", arr[0]);
        printf("%d", x1);
        printf("%c", arr[x-1]);
    }
    else
    {
        printf("%s", arr);
    }
    return 0;
}
