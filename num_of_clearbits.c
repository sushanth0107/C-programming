#include<stdio.h>
int main()
{
	int n=9;
	int total=32;
	int count=0;
	while(n>0)
	{
		if(n&1==1)
		{
			count++;
		}
		n>>=1;
	}
	printf("%d",total-count);
}
