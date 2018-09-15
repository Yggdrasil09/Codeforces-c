#include<stdio.h>

int main()
{
    short int x[2],y;

    for(y=0;y<2;y++)
    {
        scanf("%hd",&x[y]);
    }
    char str[x[0]];
    short int s1=97;
    scanf("%s",str);
    
    int count=0;
    for(y=0;;y++)
    {
        if(s1==(short int)str[y])
        {
            str[y]=' ';
            count++;
        }
        if(count==x[1])
        {
            break;
        }
        if(y==x[0])
        {
            y=-1;
            s1++;
        }
    }
    for(y=0;y<=x[0];y++)
    {
        if(str[y]!=' ')
        printf("%c",str[y]);
    }
}