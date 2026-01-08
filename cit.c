#include<stdio.h>
int main()
{
	unsigned int num=0x55;
	int position =3;
	if(num & 1<<position)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
