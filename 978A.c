#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y;
    int list[n];
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
    }
    int z,count,check=0;
    for(y=0;y<n;y++)
    {
        count=0;
        for(z=y+1;z<n;z++)
        {
            if(x[y]==x[z])
            {
                count++;
            }
        }
        if(count==0)
        {
            list[check]=x[y];
            check++;
        }
    }
    printf("%d\n",check);

    for(y=0;y<check;y++)
    {
        printf("%d ",list[y]);
    }
}