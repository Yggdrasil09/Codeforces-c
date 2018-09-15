#include<stdio.h>
#include<string.h>

int main()
{
    char x[100];
    scanf("%s",x);
    int y=(int)strlen(x);
    int z;
    for(z=0;z<y;z++)
    {
        if(x[z]=='-'&&x[z+1]=='-')
        {
            printf("2");
            z++;
        }
        else if(x[z]=='-'&&x[z+1]=='.')
        {
            printf("1");
            z++;
        }
        else
        {
            printf("0");
        }
    }
}