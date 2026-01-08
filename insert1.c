#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	//int n=6;
	int i,pos,ele;
	scanf("%d%d",&pos,&ele);
	for(i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=ele;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
