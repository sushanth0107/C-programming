#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
	int sum=0;
	int mat[ROW][COL];
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			if(i==j)
			{
				sum+=mat[i][j];

			}
		}
	}
	printf("%d",sum);


}
