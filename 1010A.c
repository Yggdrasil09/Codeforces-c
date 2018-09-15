#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    double x[n];
    int y;
    for(y=0;y<n;y++)
    {
        scanf("%lf",&x[y]);
    }
    int z,max;
    for(y=0;y<n;y++)
    {
        if(fmod(x[y],2)==0)
        {
            x[y]--;
        }
        printf("%.0lf ",x[y]);
    }
}