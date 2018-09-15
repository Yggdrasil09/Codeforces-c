#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y,z,t;
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
    }
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
    if(n%2==0)
    {
        printf("%d",x[(n/2)-1]);
    }
    else
    {
        printf("%d",x[n/2]);
    }
}