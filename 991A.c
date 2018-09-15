#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y,z,count=0,t;
    float avg=0,avg1;
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
        avg=avg+x[y];
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
    avg=avg/n;
    while(avg<4.5)
    {
        for(y=0;y<n;y++)
        {
            if(x[y]!=5)
            {
                x[y]=5;
                count++;
                break;
            }
        }
        avg1=0;
        for(y=0;y<n;y++)
        {
            avg1=avg1+x[y];
        }
        avg1=avg1/n;
        avg=avg1;
    }
    printf("%d",count);
}