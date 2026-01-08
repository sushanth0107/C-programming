#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		int c=a&b;
		a=a^b;
		b=c<<1;
		
	}
	printf("%d",a);
}
