#include <stdio.h>
#include <string.h>
char palabra[1005];
char p [1005];
char f [1005];
int main()
{
    fgets(palabra, 1005, stdin);
    palabra[strcspn(palabra, "\n")] = '\0';
    int x = strlen(palabra);
    int cont=0;
    for(int i=0; i<x; i++)
    {
        if(palabra[i]=='l' && palabra[i+1]=='o' && palabra[i+2]==' ' && palabra[i+3]=='q' && palabra[i+4]=='u' && palabra[i+5]=='e')
        {
            break;
        }
        else
        {
            cont++;
        }
    }
    for(int i=0; i<cont; i++)
    {
        p[i] = palabra[i];
    }
    int cont2=0;

    for(int i=cont+7; i<x; i++)
    {
        f[cont2] = palabra[i];
        cont2++;
    }
    printf("%s", f);
    printf(" lo que ");
    printf("%s", p);


    return 0;
}
