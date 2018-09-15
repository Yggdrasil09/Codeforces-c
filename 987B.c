#include<stdio.h>
#include<math.h>

int main()
{
   double x[2],y;
   scanf("%lf",&x[0]);
   scanf("%lf",&x[1]);
    double t[2];
    t[0]=x[1]*log(x[0]); 
    t[1]=x[0]*log(x[1]);
    if(t[1]==t[0]||x[1]==x[0])
    {
        printf("=");
    }
    else
    {
        if(t[0]>t[1])
        {
            printf(">");
        }
        else
        {
            printf("<");
        }
    }
}