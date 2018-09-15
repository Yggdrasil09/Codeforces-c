#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char x[n];
    scanf("%s",x);
    int y;
    int count=0;
    for(y=0;y<n;y++)
    {
        if(x[y]!=x[y+1])
        {
            y=y+1;
        }
        count++;
    }
    printf("%d",count);
}