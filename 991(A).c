#include<stdio.h>

int main()
{
	int x[4],y;
	for(y=0;y<4;y++)
	{
		scanf("%d",&x[y]);
	}
	if(x[0]+x[1]-x[2]<=x[3]-1&&x[2]<=x[1]&&x[2]<=x[0])
	{
		printf("%d",x[3]-(x[0]+x[1]-x[2]));
	}
	else
	{
		printf("-1");
	}
}