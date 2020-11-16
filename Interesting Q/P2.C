#include<stdio.h>
int upper(int ch);
int lower(int ch);
void main()
{
	int c,cnew;
	printf("Enter any alphabet to change case:");
	c=getchar();
	if((c>=65&&c<=90)||(c>=97&&c<=122))
	{
		if(c>=65&&c>=90)
			cnew=lower(c);
		else
			cnew=upper(c);
	}
	printf("\nChanged character:%c",cnew);
}
int upper(int ch)
{
	char new;
	new=ch+32;
	return new;
}
int lower(int ch)
{
	char new;
	new=ch-32;
	return new;
}