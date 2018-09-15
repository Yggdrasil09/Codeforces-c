#include<stdio.h>

int main()
{
    double x;
    scanf("%lf",&x);
    int list[(long int)x][(int)2];
    double y,count=0;
    for(y=0;y<x;y++)
    {
        scanf("%d %d",&list[(long int)y][0],&list[(long int)y][1]);
        if(list[(long int)y][0]>0)
        {
            count++;
        }
    }
    double count1=0;
    if(count>1)
    {
        for(y=0;y<x;y++)
        {
            if(list[(long int)y][0]<0)
            {
                count1++;
            }
        }
        if(count1>1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    else
    {
        for(y=0;y<x;y++)
        {
            if(list[(long int)y][0]>0)
            {
                count1++;
            }
        }
        if(count1>1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }   
    }
}