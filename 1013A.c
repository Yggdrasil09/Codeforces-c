#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n][2];
    int y;
    double sum=0,sum1=0;
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y][0]);
        sum=sum+x[y][0];
    }
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y][1]);
        sum1=sum1+x[y][1];
    }
    if(sum>=sum1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}