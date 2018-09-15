#include<stdio.h>

int main()
{
    long int n;
    scanf("%ld",&n);
    int x[n];
    long int y;
    int sum=0;
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
        sum=sum+x[y];
    }
    if(sum%2!=0)
    {
        sum++;
    }
    int sum1=0;
    for(y=0;y<n;y++)
    {
        sum1=sum1+x[y];
        if(sum1>=sum/2)
        {
            printf("%ld",y+1);
            break;
        }
    }

}