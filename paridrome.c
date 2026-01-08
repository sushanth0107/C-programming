#include<stdio.h>
void main()
{
	int num,start,final=0,digit;
	scanf("%d",&num);
	start=num;
	while(num>0)
	{
		digit=num%10;
		final=(final*10)+digit;
		num=num/10;
	}
	printf("%d\n",final);
	if(start==final)
	{
		printf("paridrome");
	}
}
