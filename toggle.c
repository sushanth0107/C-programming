#include<stdio.h>
int main()
{
	int res;
	int n=0X1234;
	res=((n<<12)&0XF000|(n<<4)&0X0F00|(n>>4)&0X00F0|(n>>12)&0X000F);
	printf("%x",res);
}

