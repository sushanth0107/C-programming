#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int pos;
	//scanf("%d",&pos)
	int sum=0;
	while(num>0)
	{
		//pos=num%10;
		if((num&1)==0)
		{
			sum++;
		}
		num=num>>1;
	}
	printf("%d",sum);
}


