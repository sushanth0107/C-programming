#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int pos;
	scanf("%d",&pos);
	int res=(1<<pos)^n;
	printf("%d",res);
}
