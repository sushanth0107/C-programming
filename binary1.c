#include<stdio.h>
int main()
{
	int n=10;
	int res;
	for(int i=31;i>=0;i--)
	{
		res=(n>>i)&1;
	printf("%d",res);
	}
}

