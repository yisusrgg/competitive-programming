#include <stdio.h>
#include <stdbool.h>
bool delantera1(int a, int b, int m, int c1, int c2)
{
    if(c2 > c1 || c2==c1)
    {
        c1 += a;
        c2 += b;
        if(c1 > c2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
bool delantera2(int a, int b, int m, int c1, int c2)
{
    if(c1 > c2 || c1 == c2)
    {
        c1 += a;
        c2 += b;
        if(c2 > c1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
bool empate(int a, int b, int m, int c1, int c2)
{
    if(c1 > c2 || c2 > c1)
    {
        c1 += a;
        c2 += b;
        if(c2 == c1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int main(){
    int n, a, b, c1=0, c2=0, dismayor = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);
        if(delantera1(a,b,i,c1,c2))
        {
            printf("Al minuto %d el caballo 1 toma la delantera\n", i);
        }
        if(delantera2(a,b,i,c1,c2))
        {
            printf("Al minuto %d el caballo 2 toma la delantera\n", i);
        }
        if(empate(a,b,i,c1,c2))
        {
            printf("Al minuto %d los caballos van empatados\n", i);
        }
        c1 += a;
        c2 += b;
        if(c1 > c2)
        {
            if(c1-c2 > dismayor)
            {
                dismayor = c1- c2;
            }
        }
        else if(c2 > c1)
        {
            if(c2-c1 > dismayor)
            {
                dismayor = c2- c1;
            }
        }
    }
    if(c1 > c2)
    {
        printf("Termina la carrera y gana el caballo 1\n");
    }
    else if(c2 > c1)
    {
        printf("Termina la carrera y gana el caballo 2\n");
    }
    else
    {
        printf("Termina la carrera y empatan los caballos\n");
    }
    printf("La distancia maxima entre los caballos fue de %d", dismayor);
    return 0;
}
