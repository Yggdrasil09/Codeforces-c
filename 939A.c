#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y;
    for(y=0;y<n;y++)
    {
        scanf("%d",&x[y]);
    }
    int z,t,g=0;
    for(y=0;y<n;y++)
    {
       if(y+1==x[x[x[y]-1]-1])
       {
           g=1;
           printf("YES");
           break;
       } 
    }
    if(g==0)
    {
        printf("NO");
    }
}