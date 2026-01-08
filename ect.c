#include<stdio.h>
int fun(int a)
{
	int i;
	for(i=31;i>=0;i--)
	{
		int c=(a>>i)&1;
		printf("%d",c);
	}
	printf("\n");
}
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
	int pos=0;
	while(n>0)
	{
		if((n&1)==1)
		{
			break;
		}
		n=n>>1;
		pos++;
	}
	printf("%d",pos);

}
