#include<stdio.h>
int main()
{
	int bin;
	scanf("%d",&bin);
	int rem;
	while(bin>0)
	{
		rem=bin%10;
		res=(dec<<1)|rem;
		dec=dec/10;
		

	}
	printf("%d",res);
}
