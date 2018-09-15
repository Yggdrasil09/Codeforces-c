#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y;
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
    } 
    int z,t;
    for(y=0;y<n;y++)
    {
        for(z=0;z<n;z++)
        {
            if(x[y]<x[z])
            {
                t=x[y];
                x[y]=x[z];
                x[z]=t;
            }
        }
    }
    t=x[n-1];
    int count=0;
    for(y=n-2;y>=0;y--)
    {
        if(x[y]!=0)
        {
            if(x[y]==t)
            {
                continue;
            }
            else
            {
                t=x[y];
                count++;
            }
        }
        else
        {
            break;
        }
    } 
    printf("%d",count+1);
}