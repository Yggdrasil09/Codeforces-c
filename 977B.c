#include<stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   char x[n+1];
   scanf("%s",x);
   int y,z;
   int count;
   int check=0;
   char res[3];
   for(y=0;y<n;y++)
   {
       count=0;
       for(z=0;z<n;z++)
       {
           if(x[y]==x[z]&&x[y+1]==x[z+1])
           {
               count++;
           }
       }
       if(count>check)
       {
           check=count;
            res[0]=x[y];
            res[1]=x[y+1];
       }
   }
   printf("%c%c",res[0],res[1]); 
}