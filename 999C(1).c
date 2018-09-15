#include<stdio.h>

int main()
{
    short int x[2],y,z;

    for(y=0;y<2;y++)
    {
        scanf("%hd",&x[y]);
    }
    char str[x[0]];
    register short int s1,s;
    scanf("%s",str);
    for(y=1;y<=x[1];y++)
    {
        s1=(short int)str[0];
        for(z=0;z<x[0];z++)
        {
            s=(short int)str[z];
            if(s<s1)
            {
                s1=s;
            }
        }
        for(z=0;z<x[0];z++)
        {
            if(s1==(short int)str[z])
            {
                str[z]='{';
                break;
            }
        }
    }
    for(z=0;z<x[0];z++)
    {
        if(str[z]!='{')
        {
            printf("%c",str[z]);
        }
    }
}