#include<stdio.h>

int main()
{
    double n,m;
    scanf("%lf %lf",&n,&m);
    double x1,x2,x3;
    scanf("%lf %lf %lf",&x1,&x2,&x3);
    double count=0;
    double y;
    if(m<x3*3)
    {
        count=count+x3*3-m;
        m=x3*3;
    }
    m=m-x3*3;
    if(m<x2)
    {
        count=count+x2-m;
        m=x2;
    }
    m=m-x2;
    if(n<x2)
    {
        count=count+x2-n;
        n=x2;
    }
    n=n-x2;
    if(n<x1*2)
    {
        count=count+x1*2-n;
        n=x1*2;
    }
    n=n-x1*2;
    printf("%.0lf",count);
}