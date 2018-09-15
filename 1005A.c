#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y;
    int a[n];
    int count=0;
    int check=0,t=0;
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
        if(x[y]<=x[y-1]&&y!=0)
        {
            count++;
            a[t]=check;
            t++;
            check=0;
        }
        check++;
        if(y==n-1)
        {
            a[t]=x[y];
        }
    }
    printf("%d\n",count+1);
    for(y=0;y<=t;y++)
    {
        printf("%d ",a[y]);
    }
}