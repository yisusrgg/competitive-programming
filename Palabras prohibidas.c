#include <stdio.h>
#include <string.h>
char arr1[110];
char arr2[110];
int main()
{
    fgets(arr1, 110, stdin);
    arr1[strcspn(arr1, "\n")] = '\0';
    fgets(arr2, 110, stdin);
    arr2[strcspn(arr2, "\n")] = '\0';
    int x = strlen(arr1);
    int y = strlen(arr2);
    int bandera=0;

    for(int i=0; i<x; i++)
    {
        int cont=0;
        for(int j=i; j<i+y; j++)
        {
            if(arr1[j] != arr2[cont])
            {
                break;
            }
            else
            {
                cont++;
            }
        }
        if(cont==y)
        {
            for(int j=i; j<i+y; j++)
            {
                arr1[j] = ' ';
            }
        }
    }
    printf("%s", arr1);

    return 0;
}
