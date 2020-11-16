#include<stdio.h>
#include<math.h>
void root(int a,int b,int c);
void main()
{
	int a,b,c,D;
	printf("Enter 3 coefficients:");
	scanf("%d%d%d",&a,&b,&c);
	root(a,b,c);
}
void root(int a,int b,int c)
{
	float r,r1,r2;
	int D;
	D=(b*b)-(4*a*c);
	if(D<0)
		exit(0);
	else if(D==0)
	{
		r=(-b)/(2*a);
		printf("\nRoot=%.2f",r);
	}
	else if(D>0)
	{
		r1=(-b+sqrt(D))/(2*a);
		r2=(-b-sqrt(D))/(2*a);
		printf("\nroot1=%.2f,root2=%.2f",r1,r2);
	}
}