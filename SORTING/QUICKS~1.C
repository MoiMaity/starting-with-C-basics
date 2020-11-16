#include<stdio.h>
void quicksort(int [],int,int);
int partition(int [],int,int);
void main()
{
	int a[100],n,i;
	printf("enter the range:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe elements are:");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
	quicksort(a,0,n-1);
	printf("\nSorted array:");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
}
void quicksort(int a[],int l,int u)
{
	int j;
	if(l<u)
	{
		j=partition(a,l,u);
		quicksort(a,l,j-1);
		quicksort(a,j+l,u);
	}
}
int partition(int a[],int l,int u)
{
	int v,i,j,temp;
	v=a[l];
	i=l;
	j=u+l;
	do
	{
		do
			i++;
		while(a[i]<v&&i<=u);
		do
			j--;
		while(v<a[j]);
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);
	a[l]=a[j];
	a[j]=v;
	return j;
}