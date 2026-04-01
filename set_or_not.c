#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int pos;
	printf("enter the pos:");
	scanf("%d",&pos);
	if((n&(1<<pos))!=0)
	{
		printf("set");
	}
	else
	{
		printf("not set");
	}
}


