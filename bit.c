/*#include<stdio.h>
int main()
{
       unsigned	int a;
	scanf("%u",&a);
	if (a>0 && (a & (a - 1)) == 0)
	{
		printf("yes");
	}
	        else
		{
	        printf("no");
		}
}*/
#include<stdio.h>
int main()
/*{
  unsigned int n;
  scanf("%u",&n);
  if((n&1)==0)
{
	printf("even");}
	else{
        printf("odd");
}	
}*/
{
    unsigned int n=10;
    unsigned int p=2;
    unsigned  mask;
    mask=(1<<p);
	    if(n&mask)
	    {
		    printf("set");
	    }
	    else 
	    {
		    printf("not");
	    }
}

