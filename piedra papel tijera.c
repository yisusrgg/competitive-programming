#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==0 && b==2)
    {
        printf("FLIX");
    }
    else if(a==2 && b==0)
    {
        printf("MARTONTITO");
    }
    else if(a==5 && b==0)
    {
        printf("FLIX");
    }
    else if(a==0 && b==5)
    {
        printf("MARTONTITO");
    }
    else if(a==2 && b==5)
    {
        printf("FLIX");
    }
    else if(a==5 && b==2)
    {
        printf("MARTONTITO");
    }
    else if((a==4) && (b==0 || b==5 || b==2))
    {
        printf("FLIX");
    }
    else if((b==4) && (a==0 || a==5 || a==2))
    {
        printf("MARTONTITO");
    }
    else if((a==0 && b==0) || (a==5 && b==5) || (a==2 && b==2) || (a==4 && b==4))
    {
        printf("EMPATE");
    }
    return 0;
}

