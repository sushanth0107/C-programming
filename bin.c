#include<stdio.h>
int main()
{
	int bin=0;
	int n;
	scanf("%d",&n);
	int dec=0;
	while(n>0)
	{
		dec=(dec<<1)|(n%10);
		n=n/10;
	}
	printf("%d",dec);
}
