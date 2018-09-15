#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int games[n],y;
    for(y=0;y<n;y++)
    {
        scanf("%d",&games[y]);
    }
    int bills[m];
    for(y=0;y<m;y++)
    {
        scanf("%d",&bills[y]);
    }
    int z,count=0,t=0,t1=0;
    for(y=0;y<m;y++)
    {
        for(z=t;z<n;z++)
        {
            if(bills[y]>=games[z])
            {
                count++;
                t=z+1;
                break;
            }
        }
        if(z==n)
        {
            break;
        }
    }
    printf("%d",count);
}