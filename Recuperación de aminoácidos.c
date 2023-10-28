#include <stdio.h>
#include <string.h>
char arr[1000005];
char arr2[1000005];
int main()
{
    scanf("%s", arr);
    int y = 0;
    int z = strlen(arr);
    for(int i =0; i<z; i++)
    {
        if(arr[i]== 'A' || arr[i]=='C' || arr[i]=='G' || arr[i]=='T')
        {
            arr2[y] = arr[i];
            y++;
        }
    }
    int z1 = strlen(arr2);
    if(z1%3==0)
    {
        int r = z1/3;
        printf("%d ", r);
        printf("0");
    }
    else
    {
        int r1 = z1/3;
        printf("%d ", r1);
        int cont = 0;
        if(z1%3!=0)
        {
            cont++;
            z1+=cont;
            if(z1%3!=0)
            {
                cont++;
                z1+=cont;
            }
        }
        printf("%d", cont);
    }
    return 0;
}
