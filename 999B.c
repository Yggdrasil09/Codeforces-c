#include<stdio.h>

int main()
{
    int n,y,z;
    scanf("%d",&n);
    char x[n],t;
    scanf("%s",x);
    for(y=2;y<=n;y++)
    {
        if(n%y==0)
        {
            for(z=0;z<y/2;z++)
            {
                t=x[z];
                x[z]=x[y-z-1];
                x[y-z-1]=t;   
            }
        }
    }
    printf("%s",x);
}