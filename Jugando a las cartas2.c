#include <stdio.h>
int main()
{
    int n, m;
    int cont1 = 0;
    int cont2= 0;
    int bandera1=1;
    int bandera2=1;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        for(int j=0; j<10; j++)
        {
            int z;
            scanf("%d", &z);
            if(cont<16)
            {
                cont1+=z;
                if(cont1>21)
                {
                    printf("La casa gana la partida %d", i);

                }
            }
        }
    }


    return 0;
}
