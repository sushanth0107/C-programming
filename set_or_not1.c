#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k;
	scanf("%d",&k);
	if((n&(1<<k))==0)
	{
		printf("clear");
	}
	else
	{
		printf("set");
	}
}
