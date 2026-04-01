#include <stdio.h>
int main()
{
	int res;
	int n;
	scanf("%d",&n);
	int bits=8;
	int first_bit=n>>(bits-1)&1;
	int last_bit=n&1;;
	if(first_bit!=last_bit)
	{
		res=(n^(1<<(bits-1)))^1;
	}
	printf("%d",res);
}

