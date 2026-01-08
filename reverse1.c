#include<stdio.h>
void fun(int a)
{
    int i;
    for(i=15;i>=0;i--)
    {
	    int s=(a>>i)&1;
	    printf("%d",s);
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    int res=0,i;
    for(i=0;i<16;i++)
    {
        res=(res<<1)|n&1;
        n=n>>1;
    }
    fun(res);
}
