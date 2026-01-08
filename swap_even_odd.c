#include<stdio.h>
int main()
{
	int res;
	int n=23;
	res=(n&0XAAAAAAAA)>>1|(n&0X55555555)<<1;
	printf("%d",res);
}

