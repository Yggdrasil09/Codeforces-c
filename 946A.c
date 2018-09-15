#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y,sum=0;
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
        if(x[y]<0)
        {
            sum=sum-x[y];
        }
        else
        {
            sum=sum+x[y];
        }
    }
    printf("%d",sum);
}