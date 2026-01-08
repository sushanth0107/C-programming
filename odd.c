#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int *arr=malloc(6*sizeof(int));
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	arr=realloc(arr,8*sizeof(int));
	for(i=0;i<8;i++)
	{
		printf("%d",arr[i]);
	}
	free(arr);
}

	
	

