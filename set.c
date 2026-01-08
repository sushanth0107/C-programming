#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int pos;
	scanf("%d",&pos);
	if(n&(1<<pos))
	{
		printf("set");
	}
	else
	{
		printf("not set");
	}
}
