include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int bits=4;
	printf("%b",n);
	int res=0;
	int j=1;
	int original=n;
	while(n>0)
	{
		int lsb=n&1;
		res=res|(lsb<<(bits-j));
		j++;
		n=n>>1;
		
		
	}


	printf("%b",res);
}

