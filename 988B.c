#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char list[n][101];
    int y,z;
    for(y=0;y<n;y++)
    {
        scanf("%s",list[y]);
    }
    char t[101];
    for(y=0;y<n;y++)
    {
        for(z=y;z<n;z++)
        {
            if(strlen(list[y])>strlen(list[z]))
            {
                strcpy(t,list[z]);
                strcpy(list[z],list[y]);
                strcpy(list[y],t);
            }
        }
    }
    char *p;
    int count=0;
    for(y=0;y<n-1;y++)
    {
        p=strstr(list[y+1],list[y]);
        if(p)
        {
            count++;
        }  
    }
    if(count==n-1)
    {
        printf("YES\n");
        for(y=0;y<n;y++)
        {
            printf("%s\n",list[y]);
        }
    }
    else
    {
        printf("NO");
    }
}