#include<stdio.h>
int exponent(int x,int y);
void main()
{
	int n,e,result;
	printf("Enter any number and exponent:");
	scanf("%d%d",&n,&e);
	result=exponent(n,e);
	printf("\nThe result=%d",result);
}
int exponent(int x,int y)
{
	int i;
	if(y>=2)
	{
		for(i=2;i<=y;i++)
			x=x*x;
		return x;
	}
	else if(y==1)
		return x;
	else if(y==0)
		return 1;
}
	