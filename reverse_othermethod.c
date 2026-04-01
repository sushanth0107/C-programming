#include<stdio.h>
void fun(int s)
{
	int m=0;
	for(int i=31;i>=0;i--)
	{
		 m=(s>>i)&1;
		 printf("%d\n",m);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int res=0;

	while(n>0)
	{
		res=(res<<1)|n&1;
		n=n>>1;

	}
	printf("%d\n",res);
	fun(res);
}
