#include<stdio.h>
int main()
{
	int res=0;
	int xor=0;
	int arr[]={1,7,2,3,4,8,1,2,3,4,6,7};
	int i;
	for(i=0;i<12;i++)
	{
	     xor=xor^arr[i];
	}
	int set=xor&-xor;
	int x=0,y=0;
	for(i=0;i<12;i++)
	{
	if(arr[i]&set)
	{
		x=x^arr[i];
	}
	else
	{
		y=y^arr[i];
	}
	}
	printf("%d%d",x,y);
}


