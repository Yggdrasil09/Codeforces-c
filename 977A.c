#include<stdio.h>
#include<math.h>

int main()
{
    double x;
    scanf("%lf",&x);
    int y;
    scanf("%d",&y);
    int z;
    for(z=0;z<y;z++)
    {
        if(fmod(x,10)!=0)
        {
            x--;
        }
        else
        {
            x/=10;
        }
    }
    printf("%.0lf",x);
}