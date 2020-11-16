#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,*p,*q,sum;
	clrscr();
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("\nThe sum:%d",sum);
	getch();
}