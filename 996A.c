#include<stdio.h>

int main()
{
    long int x,y,count=0,z;
    scanf("%ld",&x);
    long int a[5]={1,5,10,20,100};
    for(y=4;y>=0;y--)
    {
        z=a[y];
        while(a[y]<=x)
        { 
            a[y]=a[y]+z;
            count++;
        }
        x=x-(a[y]-z);
    }
    printf("%ld",count);
}