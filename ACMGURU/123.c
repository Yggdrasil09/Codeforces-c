#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int y,sum=0,z1=0,z2=1,t;
    for(y=0;y<n;y++)
    {
        t=z1+z2;
        z1=z2;
        z2=t;
        sum=sum+z1;
    }
    printf("%d",sum);
}