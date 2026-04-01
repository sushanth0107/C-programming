#include<stdio.h>
int main()
{
	int byte=0X12345678;
     	int res=byte&0XFF;
	printf("0X%x",res);
}
