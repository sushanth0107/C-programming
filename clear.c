#include<stdio.h>
int main()
{
	int n;
        scanf("%d",&n);
	n=n&~(1<<2);
	n=n&~(1<<4);
	printf("%d",n);
}

