#include<stdio.h>
int digit(int n)
{
	while(n>0)
	{
		n=n-3;
	}
	return (n==0);
}
int isdevide9(int s)
{
	while(s>0)
	{
		s=s-9;
	}
	return (s==0);
}
int main()
{
	int num;
	scanf("%d",&num);
	if((num&1)==0 && digit(num) && isdevide9(num))
	{
		printf("this number is divisbale y 6 and 9=[%d]",num);
	}
	else
	{
		printf("[%d],this is not divisable by 6 and 9",num);
	}
}
