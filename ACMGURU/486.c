#include<stdio.h>

int main()
{
    int x[4],x1[4],y,z,t;
    scanf("%d",&z);
    for(y=1,t=0;y<10000;y=y*10,t++)
    {
        x[t]=z%(y*10)/y;
    }
    scanf("%d",&z);
    for(y=1,t=0;y<10000;y=y*10,t++)
    {
        x1[t]=z%(y*10)/y;
    }
    int count=0;
    for(y=0;y<4;y++)
    {
        if(x[y]==x1[y])
        {
            count++;
        }
    }
    printf("%d",count);
    int g;
    count=0;
    for(y=0;y<4;y++)
    {
        g=0;
        for(z=0;z<4;z++)
        {
            if(x[y]==x1[z]&&z!=y)
            {
                g=1;
            }
        }
        if(g==1)
        {
            count++;
        }
    }
    printf(" %d",count);
}