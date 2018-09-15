#include<stdio.h>

int main()
{
    int x[2],y;
    for(y=0;y<2;y++)
    {
        scanf("%d",&x[y]);
    }
    int lis[x[0]],count=0;
    for(y=0;y<x[0];y++)
    { 
       scanf("%d",&lis[y]);
    }
    for(y=0;y<x[0];y++)
    {
        if(lis[y]>x[1])
        {
            break;
        }
        else
        {
            lis[y]=x[1]+1;
            count++;
        }
    }
    for(y=x[0]-1;y>=0;y--)
    {
        if(lis[y]>x[1])
        {
            break;
        }
        else
        {
            count++;
        }
    }
    printf("%d",count);
}