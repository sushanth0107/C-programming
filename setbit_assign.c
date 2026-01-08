#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count=0;
	int bits=4;
	int res=0;
	int j=1;
	while(n>0)
	{
		if((n&1)==1)
		{
			res=res|(1<<(bits-j));
			j++;
		}
		n=n>>1;
	

	}
	printf("%d",res);
}


