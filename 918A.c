#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int y;
    int z=1,z1=1,t,g;
    int s;
    for(y=1;y<=n;y++)
    {
        g=0;
        t=z+z1;
        if(y==z1)
        {
            printf("O");
        }
        else
        {
            for(s=y;s<z1;s++)
            {
                y++;
                printf("o");
                if(y>n)
                {
                    g=1;
                    break;
                }
            }
            if(g==0)
            {
                printf("O");
            }
        }
        z=z1;
        z1=t;
    }
}