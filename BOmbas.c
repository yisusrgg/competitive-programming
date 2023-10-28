#include <stdio.h>
int arr3[30];
int main()
{
    int m;
    scanf("%d", &m);
    int arr1[m];
    for(int i = 0; i<m; i++)
    {
        char z;
        scanf(" %c", &z);
        arr1[i] = z;
    }

    int c;
    scanf("%d", &c);
    int arr2[c];
    for(int i = 0; i<c; i++)
    {
        char z;
        scanf(" %c", &z);
        arr2[i] = z;
    }

    for(int i=0; i<26; i++)
    {
        scanf("%d", &arr3[i]);
    }
    int cont = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cont+= (arr2[j]-64);
                arr2[j] = 0;
            }
        }
    }
    printf("%d", cont);
    return 0;
}
