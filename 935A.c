#include<stdio.h>
#include<math.h>

int main()
{
    double x;
    scanf("%lf",&x);
    double y;
    double count=0;
    for(y=1;y<=x/2;y++)
    {
        if(fmod(x-y,y)==0)
        {
            count++;
        }
    }
    printf("%.0lf",count);
}