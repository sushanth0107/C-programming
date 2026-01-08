#include<stdio.h>
int main()
{
	int n,res;
	printf("enter a number");
	scanf("%d",&n);
	int pos;
	printf("enter position");
	scanf("%d",&pos);
	res=n|(1<<pos);
	printf("%d",res);
}

