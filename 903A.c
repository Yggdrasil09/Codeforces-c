#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int y;
    int x[n];
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
    }
    int z;
    int check;
    int g;
    for(y=0;y<n;y++)
    {
        if(x[y]%7==0)
        {
            printf("YES\n");
        }
        else if(x[y]%3==0)
        {
            printf("YES\n");
        }
        else
        {
            g=0;
            for(z=3;z<x[y];z=z+3)
            {
                check=x[y]-z;
                if(check%7==0)
                {
                    printf("YES\n");
                    g=1;
                    break;
                }
            }
            if(g==0)
            {
                printf("NO\n");
            }
        }
    }
}