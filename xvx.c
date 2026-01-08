#include<stdio.h>
int main()
{
        int n;
        scanf("%x",&n);
        n=n|(1<<5);
	n=n|(1<<3);
	n=n|(1<<1);
	printf("%x",n);
}

