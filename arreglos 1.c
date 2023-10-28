#include <stdio.h>
int main()
{
    int arr[10];

    double monedas[7]= {0.1, 0.25, 3.0, -12.3};

    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    for(int i=4; i>=0; i--)
    {
        printf("%c\n", vocales[i]);
    }


    return 0;
}
