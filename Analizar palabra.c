#include<stdio.h>
#include <string.h>
char arr[10000];
int main()
{
    scanf("%s", arr);
    int lon = strlen(arr);
    int voc = 0;
    for(int i=0; i<lon; i++)
    {
        if(arr[i]=='a'||arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
        {
            voc++;
        }
        else if(arr[i]=='A'||arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
        {
            voc++;
        }
    }
    printf("%d\n", lon);
    printf("%d\n", voc);
    for(int i=lon-1; i>=0; i--)
    {
        printf("%c", arr[i]);
    }


    return 0;
}
