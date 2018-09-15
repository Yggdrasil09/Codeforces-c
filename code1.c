#include<stdio.h>

int main()
{
    int a[2],y,z;
    for(y=0;y<2;y++)
    {
        scanf("%d",&a[y]);
    }

    int x[a[0]];

    for(y=0;y<a[0];y++)
    {
        scanf("%d",&x[y]);
    }

    int u;
    double res1,res=0;
    for(y=a[1];y<=a[0];y++)
    {
        for(z=0;z<a[0]-y;z++)
        {
            res1=0;
            for(u=0;u<y;u++)
            {
                res1=res1+x[z+u];
            }
            res1=res1/y;
            if(res1>res)
            {
                res=res1;
            }
        }
    }
    printf("%.16lf",res);
    
}