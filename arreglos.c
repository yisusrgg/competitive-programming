#include <stdio.h>
int main()
{

    double monedas[7] = {1,2,3,4,5,6,7};
    for(int i=0 ; i<7; i++)
    {
        printf("%lf\n", monedas[i]);
    }

    char vocales[]={'a', 'e', 'i', 'o', 'u'};
    for(int j=4; j>=0; j--)
    {
        printf("%c\n", vocales[j]);
    }


    return 0;
}
