#include<stdio.h>

int main()
{
    double n,m;
    scanf("%lf %lf",&n,&m);
    double x1,x2,x3;
    scanf("%lf %lf %lf",&x1,&x2,&x3);
    double count=0;
    double y;
    while(m<x3*3)
    {
        m++;
        count++;
    }
    m=m-x3*3;
    while(m<x2)
    {
        m++;
        count++;
    }
    m=m-x2;
    while(n<x2)
    {
        n++;
        count++;
    }
    n=n-x2;
    while(n<x1*2)
    {
        n++;
        count++;
    }
    n=n-x1*2;
    printf("%.0lf",count);
}