#include<stdio.h>
void main()
{
	int a[100],i,n,j,imin,temp;
	printf("enter the range:");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe elements are:");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
	for(i=0;i<n-1;i++)
	{
		imin=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[imin])
				imin=j;
		}
		temp=a[i];
		a[i]=a[imin];
		a[imin]=temp;
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
}