#include<stdio.h>
int leap(int x);
void main()
{
	int y,x;
	printf("Enter any year:");
	scanf("%d",&y);
	x=leap(y);
	printf("\n%d",x);
}
int leap(int x)
{
	if(x%4==0||x%400==0)
		return 1;
	else	
		return 0;
}