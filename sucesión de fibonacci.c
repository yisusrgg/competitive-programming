#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ant1=1;
    int ant2=1;
    for(int i=1; i<=n;i++)
    {
        if(i==2 || i==1)
        {
            continue;
        }
        int nuevo= ant1+ant2;
        ant1=ant2;
        ant2=nuevo;
    }
    printf("%d", ant2);
    return 0;
}
