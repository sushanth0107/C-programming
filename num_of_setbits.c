#include<stdio.h>
int main()
{int count =0;
	int n=9;
	while(n>0)
	{
		if((n&1)==1)
		{
			count++;
		}
		n>>=1;

	}
	printf("%d",count);
}
