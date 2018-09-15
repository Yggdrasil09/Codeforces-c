#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int segment[n][2];
    int y;
    for(y=0;y<n;y++)
    {
        scanf("%d %d",&segment[y][0],&segment[y][1]);
    }  
    int count=0;
    int z;
    int list[m];
    int check;
    int c=0;
    for(y=1;y<=m;y++)
    {
        check=0;
        for(z=0;z<n;z++)
        {
            if(segment[z][0]<=y&&segment[z][1]>=y)
            {
                check=1;
            }
        }
        if(check==0)
        {
            count++;
            list[c]=y;
            c++;
        }
    } 
    printf("%d\n",count);
    for(y=0;y<count;y++)
    {
        printf("%d ",list[y]);
    }
}