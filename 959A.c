#include<stdio.h>
#include<math.h>

int main()
{
    double x;
    scanf("%lf",&x); 
    if(fmod(x,2)==0)
    {
        printf("Mahmoud");
    }
    else
    {
        printf("Ehab");
    }
}