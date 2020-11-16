#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,*a,*b;
	clrscr();
	printf("Enter 2 numbers:");
	scanf("%d%d",&x,&y);
	printf("\nBefore Swapping x=%d y=%d",x,y);
	a=&x;
	b=&y;
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("\nAfter Swapping x=%d y=%d",x,y);
	getch();
}
 