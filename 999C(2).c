#include<stdio.h>

int main()
{
    int x[2],y,t=97;
    for(y=0;y<2;y++)
    {
        scanf("%d",&x[y]);
    }
    int count=0;
    char list[x[0]];
    scanf("%s",list);
    while(count<x[1])
    {
        for(y=0;y<x[0];y++)
        {
            if((int)list[y]==t)
            {
                list[y]='{';
                count++;
            }
            if(count==x[1])
            {
                break;
            }
        }
        t++;
    }
    for(y=0;y<x[0];y++)
    {
        if(list[y]!='{')
        {
            printf("%c",list[y]);
        }
    }
}