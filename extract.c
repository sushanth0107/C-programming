#include<stdio.h>
int main()
{
	int n;
	scanf("%x",&n);
	int n1=(n>>24)&0XFF;
	int n2=(n>>16)&0XFF;
	int n3=(n>>8)&0XFF;
	int n4=(n&0xFF);
	printf("0X%X\n",n1);
	printf("0X%X\n",n2);
	printf("0X%X\n",n3);
	printf("0X%X\n",n4);
}

