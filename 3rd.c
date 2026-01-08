#include<stdio.h>
void fun(int s)
{
	for(int i=31;i>=0;i--)
	{
		int res=(s>>i)&1;
		printf("%d",res);
	}
	printf("\n");
}
int main()
{
	int num;
	scanf("%d",&num);
        fun(num);
	int res=num|(1<<3);
	//printf("%d",res);
	int clear=res&~(1<<5);
	//printf("%d",clear);
	int tog=clear^(1<<7);
	//printf("%d",tog);
	fun(tog);
	
}
	
