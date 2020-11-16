#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	clrscr();
	printf(" Enter the first number :");
	scanf("%d",&a);
	printf("\n Enter the second number :");
	scanf("%d",&b);
	printf("\n Enter the third number :");
	scanf("%d",&c);
	p1=&a;
	p2=&b;
	p3=&c;
	if((*p1>=*p2)&&(*p1>=*p3))
	printf("\nThe Greatest Number is : %d",*p1);
	else
	{
		if((*p2>=*p1)&&(*p2>=*p3))
		printf("\nThe Greatest Number is : %d",*p2);
		else
		printf("\nThe Greatest Number is : %d",*p3);
	}
	getch();
}
