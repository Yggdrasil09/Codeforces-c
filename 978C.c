#include<stdio.h>

int main()
{
    double x[2];
    int y,z;
    for(y=0;y<2;y++)
    {
        scanf("%lf",&x[y]);
    }
    double room[(int)x[0]],let[(int)x[1]];
    for(y=0;y<x[0];y++)
    {
        scanf("%lf",&room[y]);
    }
    for(y=0;y<x[1];y++)
    {
        scanf("%lf",&let[y]);
    }
    double res[(int)x[1]][2];
    double sum=0;
    for(y=0;y<x[1];y++)
    {
        label:
        if(let[y]<=room[(int)sum])
        {
            res[y][0]=sum+1;
            res[y][1]=let[y];
        }
        else
        {
            for(z=y;z<x[1];z++)
            {
                let[z]=let[z]-room[(int)sum];
            }
            sum++;
            goto label;
        }    
    }
    for(y=0;y<x[1];y++)
    {
        printf("%.0lf %.0lf\n",res[y][0],res[y][1]);
    }
}