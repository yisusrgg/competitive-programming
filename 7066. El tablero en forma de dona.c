#include <stdio.h>
int main()
{
    int w,h,x,y,r,s,f1,f2;
    scanf("%d%d%d%d%d%d", &w,&h,&x,&y,&r,&s);

    if(r>=0)
    {
        x=x+(r%w);
        if(x>=w)
        {
            x=x%w;
        }
    }
    else
    {
        x=x+(r%w);
        if(x<0)
        {
            x=x+w;
        }
    }
    if(s>=0)
    {
        y=y+(s%h);
        if(y>=h)
        {
            y=y%h;
        }
    }
    else
    {
        y=y+(s%h);
        if(y<0)
        {
            y=y+w;
        }
    }
    printf("%d %d", x, y);
    return 0;
}
