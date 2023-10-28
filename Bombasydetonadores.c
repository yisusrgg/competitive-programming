#include <stdio.h>
int cost[26];
int main()
{
    int n;
    scanf("%d", &n);
    char arr1[n];
    for(int i = 0; i<n; i++)
    {
        char mex;
        scanf(" %c", &arr1[i]);
    }
    int m;
    scanf("%d", &m);
    char arr2[m];
    for(int i=0; i<m; i++)
    {
        scanf(" %c", &arr2[i]);
    }

    for(int i = 0; i<26; i++)
    {
        scanf("%d", &cost[i]);
    }
    int cont = 0;
    for(int i = 0; i<n; i++)
    {
        char tipo = arr1[i];
        for(int j=0; j<m; j++)
        {
            if(arr2[j]==tipo)
            {
                cont+= cost[tipo - 'A'];
                arr2[j]='a';
            }
        }
    }
    printf("%d", cont);


    return 0;
}
