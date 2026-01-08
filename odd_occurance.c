#include<stdio.h>
int main()
{
	int res=0,i;
	int arr[]={1,1,2,2,3,3,3};
	for(i=0;i<7;i++)
	{
		res=res^arr[i];
	}
		printf("%d",res);
}

