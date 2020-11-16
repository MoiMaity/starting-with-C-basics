#include<stdio.h>
#include<conio.h>
void even(int *,int *);
void main()
{
	int m,n;
	clrscr();
	printf("Enter lower and upper range:");
	scanf("%d%d",&m,&n);
	printf("\nThe even numbers in this range are:");	
	even(&m,&n);
	getch();
}
void even(int *m,int *n)
{
	int i;
	for(i=*m;i<=*n;i++)
	{
		if(i%2==0)
			printf(" %d ",i);
	}
}