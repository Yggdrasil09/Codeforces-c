#include<stdio.h>

int main()
{
    short int n,y,z,count;

    scanf("%hd",&n);

    int x[n];

    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
    }

    int check=0;

    for(y=0;y<n;y++)
    {
        count=0;
        for(z=0;z<n;z++)
        {
            if(x[y]==x[z])
            {
                count++;
            }
        }
        if(count>check)
        {
            check=count;
        }
    }

    printf("%d",check);
}