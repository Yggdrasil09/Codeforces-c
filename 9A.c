#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int z,count=0;
    if(x>y)
    {
        for(z=x;z<=6;z++)
        {
            count++;
        }
    }
    else
    {
        for(z=y;z<=6;z++)
        {
            count++;
        }
    }
    if(count%2==0&&count%3==0)
    {
        printf("%d/%d",count/(2*3),6/(2*3));
    }
    else if(count%2==0)
    {
        printf("%d/%d",count/2,6/2);
    }
    else if(count%3==0)
    {
        printf("%d/%d",count/3,6/3);
    }
    else
    {
        printf("%d/%d",count,6);
    }
}