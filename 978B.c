#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char x[n+1];
    scanf("%s",x);
    int y,z,count=0,count1=0;
    for(y=0;y<=n-2;y++)
    {
        if(x[y]=='x')
        {
            z=y;
            count=0;
            while(x[z]=='x')
            {
                count++;
                if(count>=3)
                {
                    x[z]='{';
                    count1++;
                }
                z++;
            }
        }
    }
    printf("%d",count1);
}