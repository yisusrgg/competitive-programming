#include <stdio.h>
int main()
{
    int arr[10];
    arr[5]=7;
    arr[100]=7;
    arr[11] = 7;

    printf("%d\n", arr[12]);



    return 0;
}
