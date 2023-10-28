#include <stdio.h>
int arr[11];
int partida(int n)
{
    int m;
    scanf("%d", &m);
    int apuesta;
    int cont1=0;
    int cont2= 0;
    int x;
    int bandera1=1;
    int bandera2=1;
    for(int i =0 ; i<m; i++)
    {
        bandera2=1;
        scanf("%d", &apuesta);
        m-=apuesta;
        for(int j=0; j<10; j++)
        {
            scanf("%d", &arr[j]);
        }

        for(int j=0; j<10; j++)
        {
            if(bandera1==1)
            {
                if(cont1<16)
                {
                    cont1+=arr[j];
                }
                else
                {
                    bandera1=0;
                }
            }

            if(bandera1==0)
            {
                if(cont2+arr[j]<=21)
                {
                    cont2+=arr[j];
                }
            }
            else
            {
                if(cont2==21 || (cont2>=cont1 && cont2<=21) || (cont1>21))
                {
                    printf("La casa gana la partida %d\n ", i);
                    cont1=0;
                    cont2=0;
                    bandera1=1;
                    break;
                }
                else
                {
                    printf("El jugador gana la partida %d\n", i);
                    m+=apuesta*2;
                    cont1=0;
                    cont2=0;
                    bandera1=1;
                    break;
                }

            }

        }

    }
    printf("El jugador tiene %d pesos", m);
}

int main()
{
    int n;
    scanf("%d", &n);
    partida(n);

    return 0;
}
