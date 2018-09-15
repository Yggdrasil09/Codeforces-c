#include<stdio.h>
#include<string.h>

int main()
{
    char x[100];
    scanf("%s",x);
    int y;
    int n=(int)strlen(x);
    int i,o=0;
    for(y=0;y<n;y++)
    {
        if(x[y]=='o')
        {
            o++;
        }
    }
    if(o==0)
    {
        printf("YES");
    }
    else
    {
            i=n-o;
        if(i%o==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}