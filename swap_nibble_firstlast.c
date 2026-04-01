#include<stdio.h>
void fun(int m)
{
	for(int i=31;i>=0;i--)
	{
		printf("%x",(m>>i)&1);
		if(i%4==0)
		{
			printf(" ");
		}
	}
	printf("\n");
}
int main()
{
	int num;
	scanf("%x",&num);
	fun(num);
	int a=(num<<12)&0xf000|(num>>12)&0x000f;
	printf("0x%x\n",a);
	int b=(0x00f0)^(num&0x00f0);
	printf("0x%x\n",b);
	int c=(num >> 8) & 0XF;
	c = ((c & 0XA) >> 1 | (c & 0X5) << 1) << 8;
	printf("0x%x\n",c);
	int res=a|b|c;
	printf("0x%x\n",res);
	fun(res);
}
	

	       
