#include<stdio.h>

int main()
{
    int x[2],y,z;
    for(y=0;y<2;y++)
    {
        scanf("%d",&x[y]);
    }
    char name[x[0]][11];
    int ip[x[0]][4];
    for(y=0;y<x[0];y++)
    {
        scanf("%s %d.%d.%d.%d",name[y],&ip[y][0],&ip[y][1],&ip[y][2],&ip[y][3]);
    }
    char name1[x[1]][11];
    int ip1[x[1]][4];
    for(y=0;y<x[1];y++)
    {
        scanf("%s %d.%d.%d.%d;",name1[y],&ip1[y][0],&ip1[y][1],&ip1[y][2],&ip1[y][3]);
    }
    for(y=0;y<x[1];y++)
    {
        for(z=0;z<x[0];z++)
        {
            if((ip[z][0]==ip1[y][0])&&(ip[z][1]==ip1[y][1])&&(ip[z][2]==ip1[y][2])&&(ip[z][3]==ip1[y][3]))
            {
                printf("%s %d.%d.%d.%d; #%s\n",name1[y],ip[z][0],ip[z][1],ip[z][2],ip[z][3],name[z]);
            }
        }
    }
}