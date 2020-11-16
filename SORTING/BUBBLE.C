#include<stdio.h>
void main()
{
	int a[100],i,n,j,temp;
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
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
}