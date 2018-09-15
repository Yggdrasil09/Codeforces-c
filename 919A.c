#include<stdio.h>

int main()
{
    int x[2],y;
    for(y=0;y<2;y++)
    {
        scanf("%d",&x[y]);
    }
    double list[x[0]][2];
    for(y=0;y<x[0];y++)
    {
        scanf("%lf %lf",&list[y][0],&list[y][1]);
    }
    double least=list[0][0]/list[0][1];
    for(y=0;y<x[0];y++)
    {
        if(list[y][0]/list[y][1]<=least)
        {
            least=list[y][0]/list[y][1];
        }
    }
    printf("%.8lf",least*x[1]);
}
