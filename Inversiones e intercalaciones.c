#include <stdio.h>
#include <string.h>
char A[105];
char B[105];
char inversaA[210];
char inversaB[210];
char intercalacionAB[210];
char intercalacionBA[210];
char intercalacion3[210];
char intercalacion4[210];
int main()
{
    fgets(A, 105, stdin);
    A[strcspn(A, "\n")] = '\0';
    fgets(B, 105, stdin);
    B[strcspn(B, "\n")] = '\0';
    int mayor=-1;
    int x = strlen(A);
    int y = strlen(B);
    int cont=0;
    for(int i=x-1; i>=0; i--)
    {
        inversaA[cont] = A[i];
        cont++;
    }
    cont=0;
    for(int i=y-1; i>=0; i--)
    {
        inversaB[cont] = B[i];
        cont++;
    }

    cont=0;
    if(y>x)
    {
        for(int i=0; i<x+x; i++)
        {
            intercalacionAB[i] = A[cont];
            i++;
            intercalacionAB[i] = B[cont];
            cont++;
        }
        for(int i=x+x; i<y+x; i++)
        {
            intercalacionAB[i] = B[cont];
            cont++;
        }

        cont=0;
        for(int i=0; i<x+x; i++)
        {
            intercalacionBA[i] = B[cont];
            i++;
            intercalacionBA[i] = A[cont];
            cont++;
        }
        for(int i=x+x; i<y+x; i++)
        {
            intercalacionBA[i] = B[cont];
            cont++;
        }
        cont=0;

        for(int i=0; i<x+x; i++)
        {
            intercalacion3[i] = A[cont];
            i++;
            intercalacion3[i] = inversaA[cont];
            cont++;
        }

        cont=0;
        for(int i=0; i<y+y; i++)
        {
            intercalacion4[i] = B[cont];
            i++;
            intercalacion4[i] = inversaB[cont];
            cont++;
        }
        cont=0;
    }

    else if(x>y)
    {
        for(int i=0; i<y+y; i++)
        {
            intercalacionAB[i] = A[cont];
            i++;
            intercalacionAB[i] = B[cont];
            cont++;
        }
        for(int i=y+y; i<y+x; i++)
        {
            intercalacionAB[i] = A[cont];
            cont++;
        }
        cont=0;

        for(int i=0; i<y+y; i++)
        {
            intercalacionBA[i] = B[cont];
            i++;
            intercalacionBA[i] = A[cont];
            cont++;
        }
        for(int i=y+y; i<y+x; i++)
        {
            intercalacionBA[i] = A[cont];
            cont++;
        }
        cont=0;

        for(int i=0; i<x+x; i++)
        {
            intercalacion3[i] = A[cont];
            i++;
            intercalacion3[i] = inversaA[cont];
            cont++;
        }
        cont=0;
        for(int i=0; i<x+x; i++)
        {
            intercalacion4[i] = B[cont];
            i++;
            intercalacion4[i] = inversaB[cont];
            cont++;
        }

    }

    else
    {
        for(int i=0; i<y+y; i++)
        {
            intercalacionAB[i] = A[cont];
            i++;
            intercalacionAB[i] = B[cont];
            cont++;
        }
        cont=0;

        for(int i=0; i<y+y; i++)
        {
            intercalacionBA[i] = B[cont];
            i++;
            intercalacionBA[i] = A[cont];
            cont++;
        }
        cont=0;

        for(int i=0; i<x+x; i++)
        {
            intercalacion3[i] = A[cont];
            i++;
            intercalacion3[i] = inversaA[cont];
            cont++;
        }
        cont=0;
        for(int i=0; i<x+x; i++)
        {
            intercalacion4[i] = B[cont];
            i++;
            intercalacion4[i] = inversaB[cont];
            cont++;
        }
    }


    printf("%s\n", inversaA);
    printf("%s\n", inversaB);
    printf("%s\n", intercalacionAB);
    printf("%s\n", intercalacionBA);
    printf("%s\n", intercalacion3);
    printf("%s\n", intercalacion4);

    return 0;
}
