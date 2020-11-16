#include<stdio.h>
void main()
{
	int a[100],i,n,j,key;
	printf("enter the range:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe elements are:");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
	for(i=0;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
}