#include<stdio.h>

int main()
{
    int x[2],y;
    for(y=0;y<2;y++)
    {
        scanf("%d",&x[y]);
    }
    int chc[x[0]],chk[x[1]];
    for(y=0;y<x[0];y++)
    {
        scanf("%d",&chc[y]);
    }
    for(y=0;y<x[1];y++)
    {
        scanf("%d",&chk[y]);
    }
    int z;
    for(y=0;y<x[0];y++)
    {
        for(z=0;z<x[1];z++)
        {
            if(chc[y]==chk[z])
            {
                printf("%d ",chc[y]);
            }
        }
    }
}