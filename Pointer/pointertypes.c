#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr=NULL;		//null pointer
	void *v;		//void pointer
	int *w;			//wild pointer
	int a=1,b=2;
	clrscr();
	v=&a;			//pointer is now integer type
	w=&b;			//no more a wild pointer
	printf("\nNull pointer=%d\nWild pointer=%d\nVoid pointer=%d\n",ptr,w,v);
	getch();
}
	
