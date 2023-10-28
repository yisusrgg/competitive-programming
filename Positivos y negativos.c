#include <stdio.h>
int positivos[105];
int negativos[105];
int main()
{
    int n;
    scanf("%d", &n);
    int pos=0;
    int neg=0;
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        if(x<0)
        {
            negativos[neg]=x;
            neg++;
        }
        else if(x>0)
        {
            positivos[pos]=x;
            pos++;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(positivos[j]>positivos[j+1])
            {
                int aux= positivos[j];
                positivos[j]= positivos[j+1];
                positivos[j+1]= aux;
            }
            if(negativos[j]>negativos[j+1])
            {
                int aux1= negativos[j];
                negativos[j] = negativos[j+1];
                negativos[j+1] = aux1;
            }
        }
    }
    printf("POSITIVOS\n");
    for(int i=0; i<n+1; i++)
    {
        if(positivos[i]>0)
        {
            printf("%d\n", positivos[i]);
        }
    }
    printf("NEGATIVOS\n");
    for(int i=n; i>=0; i--)
    {
        if(negativos[i]<0)
        {
            printf("%d\n", negativos[i]);
        }
    }
    return 0;
}
