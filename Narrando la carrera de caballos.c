#include <stdio.h>
void carrera(int n)
{
    int cont1=0;
    int cont2=0;
    int cambia1 = 1;
    int cambia2 = 1;
    int cambia3= 1;
    int maximo =0;
    int empate=1;
    for(int i=1; i<=n; i++)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        cont1+=a;
        cont2+=b;
        if(cont1>cont2 && cambia1==1)
        {
            printf("Al minuto %d el caballo 1 toma la delantera\n", i);
            cambia1=0;
            cambia3=1;
            empate=0;

        }
        else if(cont2>=cont1 && cambia2==1)
        {
            printf("Al minuto %d el caballo 2 toma la delantera\n", i);
            cambia2=0;
            if(cambia1==0 || cambia3==0)
            {
                cambia1=1;
                cambia3=1;
            }
            cambia3=1;
            empate=0;
        }
        else if(cont2==cont1 && cambia3==1)
        {
            if(empate==0)
            {
                printf("Al minuto %d los caballos van empatados\n", i);
                empate = 1;
            }
            if(cambia1==0 || cambia2==0)
            {
                cambia1=1;
                cambia2=1;
            }
        }
        int distancia = cont1 - cont2;
        if (distancia < 0)
        {
            distancia = -distancia;
        }
        if (distancia > maximo)
        {
            maximo = distancia;
        }
    }


    if(cont1==cont2)
    {
        printf("Termina la carrera y empatan los caballos\n");
        printf("La distancia maxima entre los caballos fue de %d\n", maximo);
    }
    else if(cont1>cont2)
    {
        printf("Termina la carrera y gana el caballo 1\n");
        printf("La distancia maxima entre los caballos fue de %d\n", maximo);
    }
    else if(cont2>cont1)
    {
        printf("Termina la carrera y gana el caballo 2\n");
        printf("La distancia maxima entre los caballos fue de %d\n", maximo);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    carrera(n);

    return 0;
}
