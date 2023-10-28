#include <stdio.h>
#include <string.h>
char s[110];
int main()
{
    scanf("%s",s);

    int n = strlen(s);

    for(int i=0; i<n; i++)
    {
       printf("%c ",s[i]);
    }
    printf("\n");

    return 0;
}
