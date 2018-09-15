#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char x[n+1];
    scanf("%s",x);
    int y,z;
    for(y=0;y<n;y++)
    {
        if((x[y]=='a'||x[y]=='e'||x[y]=='i'||x[y]=='o'||x[y]=='u'||x[y]=='y')&&(x[y+1]=='a'||x[y+1]=='e'||x[y+1]=='i'||x[y+1]=='o'||x[y+1]=='u'||x[y+1]=='y'))
        {
            for(z=y+1;z<n;z++)
            {
                if(x[z]=='a'||x[z]=='e'||x[z]=='i'||x[z]=='o'||x[z]=='u'||x[z]=='y')
                {
                    x[z]='{';
                }
                else
                {
                    break;
                }
            }
        }
    }
    for(y=0;y<n;y++)
    {
        if(x[y]!='{')
        {
            printf("%c",x[y]);
        }
    }
}