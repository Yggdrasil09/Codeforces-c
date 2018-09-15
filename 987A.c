#include<stdio.h>
#include<string.h>

int main()
{
    char x[6][8]={"Power","Time","Space","Reality","Soul","Mind"};
    char a[6][6]={"purple","green","blue","red","orange","yellow"};
    int n,y;
    scanf("%d",&n);
    char t[n][6];
    for(y=0;y<n;y++)
    {
        scanf("%s",t[y]);
    }
    int z;
    for(y=0;y<n;y++)
    {
        for(z=0;z<6;z++)
        {
            if(t[y][0]==a[z][0])
            {
                a[z][0]='q';
            }
        }
    }
    printf("%d",6-n);
    for(y=0;y<6;y++)
    {
        if(a[y][0]!='q')
        {
            printf("\n%s",x[y]);
        }
    }
}