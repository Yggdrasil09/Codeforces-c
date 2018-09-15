#include<stdio.h>

int main()
{
    int x[2],y;
    for(y=0;y<2;y++)
    {
        scanf("%d",&x[y]);
    }
    int list[x[0]];
    for(y=0;y<x[0];y++)
    {
        scanf("%d",&list[y]);
    }
    int chk[x[1]];
    for(y=0;y<x[1];y++)
    {
        chk[y]=0;
    }
    int z,c=0,count;
    for(y=0;y<x[0];y++)
    {
        count=0;
        for(z=0;z<c;z++)
        {
            if(list[y]==chk[z])
            {
                count++;
            }
        }
        if(count==0)
        {
            chk[c]=list[y];
            c++;
        }
        if(c==x[1])
        {
            break;
        }   
    }
    count=0;
    for(y=0;y<x[1];y++)
    {
        if(chk[y]!=0)
        {
            count++;
        }   
    }
    if(count==x[1])
    {
        printf("YES\n");
        for(y=0;y<x[1];y++)
        {
            for(z=0;z<x[0];z++)
            {
                if(chk[y]==list[z])
                {
                    printf("%d ",z+1);
                    break;
                }
            }
        }
    }
    else
    {
        printf("NO\n");
    }    
}