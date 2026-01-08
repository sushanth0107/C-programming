#include<stdio.h>
int main()
{
	int res=0,bin,base=1;
	int n=1024;
	while(n>0)
	{
		bin=n%2;
		res=res+(bin*base);
		base=base*10;
		n=n/2;
	}
	printf("%d",res);
}

