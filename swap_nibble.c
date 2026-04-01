#include<stdio.h>
int main()
{
	int num;
	scanf("%X",&num);
	int res=(num>>4)&0X0F|(num<<4)&0XF0;
	printf("%X",res);
}
