#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if((n&(n-1))==0)
	{
		printf("the given number is poer of 2");
	}
	else
	{
		printf("this number is not powe of 2");
	}

