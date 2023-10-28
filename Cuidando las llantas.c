#include <stdio.h>
#include <string.h>
char arr1[10];
char arr2[10];
int main()
{
    scanf("%s", arr1);
    scanf("%s", arr2);
    if(arr1[0]==arr2[0] && arr1[1]==arr2[1] && arr1[2]==arr2[2] && arr1[3]==arr2[3])
    {
        printf("1");
    }
    else if(arr1[0]==arr2[2] && arr1[1]==arr2[3] && arr1[2]==arr2[1] && arr1[3]==arr2[0])
    {
        printf("2");
    }
    else if(arr1[0]==arr2[1] && arr1[1]==arr2[0] && arr1[2]==arr2[3] && arr1[3]==arr2[2])
    {
        printf("3");
    }
    else if(arr1[0]==arr2[3] && arr1[1]==arr2[2] && arr1[2]==arr2[0] && arr1[3]==arr2[1])
    {
        printf("4");
    }
    else
    {
        printf("-1");
    }
    return 0;
}
