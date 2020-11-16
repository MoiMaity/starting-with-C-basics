#include<stdio.h>
int fact(int x);
int permutation(int n,int r);
int combination(int n,int r);
void main()
{
	int n,r,f,p,c;
	printf("Enter n and r:");
	scanf("%d%d",&n,&r);
	f=fact(n);
	p=permutation(n,r);
	c=combination(n,r);
	printf("\n Factorial=%d\nPermutation=%d\nCombination=%d",f,p,c);
}
int fact(int x)
{
	int f;
	for(f=x;f>=1;f--)
		return (f*fact(f-1));
	return 1;
}
int permutation(int n,int r)
{
	return (fact(n)/fact(n-r));
}
int combination(int n,int r)
{
	return (permutation(n,r)/fact(r));
}