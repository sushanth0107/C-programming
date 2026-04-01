#include<stdio.h>
int main()
{
	int n=0XABCD;
	int res=(n&0X0F0F)|(n&0X00F0)<<8|(n&0XF000)>>8;
	printf("%X",res);

	
}
